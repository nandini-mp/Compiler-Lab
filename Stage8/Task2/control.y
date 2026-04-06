%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <limits.h>
	#include <string.h>
	#include <stdbool.h>
	#include "control.h"
	#include "symbolTable/symbolTable.h"
	#include "typeTable/typeTable.h"
    #include "label/label.h"
    int countLocals();
	int inLocalDecl = 0;
	extern int inParamList;
	Ttable* current_type  = NULL;
	Ctable* current_class = NULL;   // NEW — class being compiled right now
	tnode* ASTRoot = NULL;
	int yyerror(const char*);
	int yylex(void);
	extern FILE *yyin;
%}

%union{
	struct tnode *no;
	char* str;
}

%type <no> expr program Slist Stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt RepeatStmt DoWhileStmt Body Retstmt
%type <no> GDeclBlock FDefBlock MainBlock GdeclList GDecl GidList Gid ParamList Param Fdef LdeclBlock LDeclList LDecl IdList ArgList
%type <no> TypeDefBlock TypeDefList TypeDef FieldDeclList FieldDecl TypeName Field
%type <no> ClassDefBlock ClassDefList ClassDef ClassDeclList ClassDeclItem
%type <no> ClassMethodDecl
%type <no> ClassMethodDefList ClassMethodDef
%token <no> NUM STRINGG
%token <str> ID
%token PLUS MINUS MUL DIV BEGINN ENDD READ WRITE ASSIGN SEMICOLON
%token LT GT LE GE NE EQ
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAKK CONTINUEE REPEATT UNTILL
%token DECL ENDDECL COMMA INT STR
%token AMPERSAND MOD RETURNN
%token TYPE ENDTYPE ALLOC FREE NULLL MAIN
%token INITIALIZE
%token CLASS ENDCLASS EXTENDS NEW DELETE SELF
%left PLUS MINUS
%left MUL DIV MOD
%nonassoc LT GT LE GE NE EQ
%right AMPERSAND
%nonassoc UNARY

%%

program
    : TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock
        { ASTRoot = makeConnectNode($1, makeConnectNode($2, makeConnectNode($3, makeConnectNode($4, $5)))); }
    | TypeDefBlock ClassDefBlock GDeclBlock MainBlock
        { ASTRoot = makeConnectNode($1, makeConnectNode($2, makeConnectNode($3, $4))); }
    | TypeDefBlock ClassDefBlock MainBlock
        { ASTRoot = makeConnectNode($1, makeConnectNode($2, $3)); }
    | TypeDefBlock GDeclBlock FDefBlock MainBlock
        { ASTRoot = makeConnectNode($1, makeConnectNode($2, makeConnectNode($3, $4))); }
    | TypeDefBlock GDeclBlock MainBlock
        { ASTRoot = makeConnectNode($1, makeConnectNode($2, $3)); }
    | TypeDefBlock MainBlock
        { ASTRoot = makeConnectNode($1, $2); }
    | ClassDefBlock GDeclBlock FDefBlock MainBlock
        { ASTRoot = makeConnectNode($1, makeConnectNode($2, makeConnectNode($3, $4))); }
    | ClassDefBlock GDeclBlock MainBlock
        { ASTRoot = makeConnectNode($1, makeConnectNode($2, $3)); }
    | ClassDefBlock MainBlock
        { ASTRoot = makeConnectNode($1, $2); }
    | GDeclBlock FDefBlock MainBlock
        { ASTRoot = makeConnectNode($1, makeConnectNode($2, $3)); }
    | GDeclBlock MainBlock
        { ASTRoot = makeConnectNode($1, $2); }
    | MainBlock
        { ASTRoot = $1; }
    ;

TypeDefBlock : TYPE TypeDefList ENDTYPE { $$ = $2; }
             |                          { $$ = NULL; }
             ;

TypeDefList : TypeDefList TypeDef { $$ = makeConnectNode($1, $2); }
            | TypeDef             { $$ = $1; }
            ;

TypeDef : ID {TInstallEmpty($1);} '{' FieldDeclList '}' {
            $$ = makeConnectNode(makeVariableNode($1), $4);
            TSetFields($1, buildFieldList($4));
          }
        ;

ClassDefBlock
    : CLASS ClassDefList ENDCLASS
      {
          // Reserve space for VFTs: 8 words per class
          extern int classCount;  // from classTable.c
          extern int stackVal;    // from symbolTable.c
          stackVal = 4096 + (classCount * 8);
          $$ = $2;
      }
    |  { $$ = NULL; }
    ;

ClassDefList
    : ClassDefList ClassDef { $$ = makeConnectNode($1, $2); }
    | ClassDef              { $$ = $1; }
    ;

ClassDef
    : ID
      {
          current_class = CInstall($1, NULL);
      }
      '{' DECL ClassDeclList ENDDECL
      {
          CSetFields(current_class->name, buildFieldList($5));
      }
      ClassMethodDefList '}'
      {
          $$ = makeConnectNode(makeVariableNode($1),
                               makeConnectNode($5, $8));
          current_class = NULL;
      }

    | ID EXTENDS ID
    {
        current_class = CInstall($1, $3);
    }
    '{' DECL ClassDeclList ENDDECL
    {
        CSetFields(current_class->name, buildFieldList($7));
    }
    ClassMethodDefList '}'
    {
        $$ = makeConnectNode(makeVariableNode($1),
                            makeConnectNode($7, $10));
        current_class = NULL;
    }
    ;

ClassDeclList
    : ClassDeclList ClassDeclItem { $$ = makeConnectNode($1, $2); }
    | ClassDeclItem               { $$ = $1; }
    ;

ClassDeclItem
    : FieldDecl        { $$ = $1; }   /* int age; str name; */
    | ClassMethodDecl  { $$ = $1; }   /* int printDetails(); */
    ;

ClassMethodDecl
    : TypeName ID '(' ParamList ')' SEMICOLON
      {
          int lbl = getFnLabel();
          Cmethod* m = createMethod($2, $1->typeEntry,
                                    buildParamListFromTree($4), lbl);
          CAddMethod(current_class, m);
          ClearLST();   // ← must be here, resets paramBinding to -3
          $$ = makeVariableNode($2);
      }
    ;

ClassMethodDefList
    : ClassMethodDefList ClassMethodDef { $$ = makeConnectNode($1, $2); }
    | ClassMethodDef                    { $$ = $1; }
    |                                   { $$ = NULL; }
    ;

ClassMethodDef
    : TypeName ID '(' ParamList ')'
      {
          extern int inParamList;
          inParamList = 0;
      }
      '{' LdeclBlock Body '}'
      {
          Cmethod* m = CMLookup(current_class, $2);
          if (m == NULL) {
              printf("Semantic Error: Method %s not declared in class %s\n",
                     $2, current_class->name);
              exit(1);
          }
          tnode* methodNode = (tnode*)malloc(sizeof(tnode));
          methodNode->nodetype              = Nfdef;
          methodNode->varname               = strdup($2);
          methodNode->type                  = $1->type;
          methodNode->left                  = $4;
          methodNode->right                 = NULL;
          methodNode->body                  = $9;      /* Body is now $9 not $8 */
          methodNode->ldeclblock            = $8;      /* LdeclBlock is now $8 not $7 */
          methodNode->val                   = countLocals();
          methodNode->symbolTableEntry      = NULL;
          methodNode->localSymbolTableEntry = NULL;
          methodNode->classEntry            = current_class;
          methodNode->isFunction            = 1;
          methodNode->paramlist             = buildParamListFromTree($4);
          methodNode->typeEntry             = $1->typeEntry;
          ClearLST();
          $$ = methodNode;
      }
    ;

FieldDeclList : FieldDeclList FieldDecl { $$ = makeConnectNode($1, $2); }
              | FieldDecl               { $$ = $1; }
              ;

FieldDecl : TypeName ID SEMICOLON {
              $$ = makeVariableNode($2);
              if ($1->typeEntry != NULL) {
                  $$->typeEntry = $1->typeEntry;
              } else {
                  /* might be a class type field */
                  /* for Stage 7 just store NULL — class fields handled later */
                  /* or look up in class table if needed */
                  Ctable* fc = $1->varname ? CLookup($1->varname) : NULL;
                  if (fc == NULL) {
                      printf("Semantic Error: Unknown type '%s' in field declaration\n",
                             $1->varname ? $1->varname : "?");
                      exit(1);
                  }
                  /* store as NULL typeEntry — field is a class type */
                  $$->typeEntry = NULL;
              }
            }
          ;

Field : ID '.' ID {
          $$ = makeFieldAccessNode(makeVariableUseNode($1), $3);
        }
    | Field '.' ID {
          $$ = makeFieldAccessNode($1, $3);
        }
	| SELF '.' ID
      { $$ = makeSelfFieldNode($3); }
    | SELF '.' ID '.' ID
      { $$ = makeFieldAccessNode(makeSelfFieldNode($3), $5); }
    ;

TypeName
    : INT { $$ = makeTypeNode(0); }
    | STR { $$ = makeTypeNode(2); }
    | ID  {
              $$ = makeTypeNode(0);
              $$->typeEntry = TLookup($1);
              $$->varname   = strdup($1);
              /* no error here — GDecl will check for class */
          }
    ;

GDeclBlock : DECL {inLocalDecl = 0;} GdeclList ENDDECL {$$ = $3; print($$);}
	| DECL ENDDECL {$$ = NULL;}
	| {$$ = NULL;}
	;

GdeclList : GdeclList GDecl  {$$ = makeConnectNode($1,$2);}
	| GDecl {$$ = $1;}
	;

GDecl
    : TypeName
      {
          if ($1->typeEntry != NULL) {
              current_type  = $1->typeEntry;
              current_class = NULL;
          } else {
              current_class = $1->varname ? CLookup($1->varname) : NULL;
              if (current_class == NULL) {
                  printf("Semantic Error: Unknown type or class '%s'\n",
                         $1->varname ? $1->varname : "?");
                  exit(1);
              }
              current_type = NULL;
          }
      }
      GidList SEMICOLON
      {
          if (current_class != NULL) {
              $$ = makeClassDeclNode($3, current_class);
              current_class = NULL;
          } else {
              $$ = makeDeclNode($1, $3);
          }
      }
    ;

GidList : GidList COMMA Gid {$$ = makeConnectNode($1,$3);}
	| Gid {$$ = $1;}
	;

Gid : ID {$$ = makeVariableNode($1); $$->isPointer = 0;}
	| ID'['NUM']' {$$ = makeArrayNode(NULL,makeVariableNode($1),$3);}
	| ID'('ParamList')'{$$ = makeFnDeclNode(makeVariableNode($1),$3); ClearLST();}

FDefBlock : FDefBlock Fdef {$$ = makeConnectNode($1,$2);}
	| Fdef {$$ = $1;}
	;

Fdef : TypeName ID '('ParamList')' '{'LdeclBlock Body'}' { $$ = makeFnDefNode($1, makeVariableNode($2), $4, $7, $8); }


ParamList : ParamList COMMA Param {$$ = makeConnectNode($1,$3);}
	| Param {$$ = $1;}
	|		{$$ = NULL;}
	;

Param : TypeName ID {$$ = makeParamNode($1, makeVariableNode($2));}
	;

LdeclBlock : DECL {inLocalDecl = 1; inParamList = 0;} LDeclList ENDDECL {$$ = $3;}
	| DECL ENDDECL {$$ = NULL;}
    | {$$ = NULL;}
	;

LDeclList : LDeclList LDecl {$$ = makeConnectNode($1,$2);}
	| LDecl {$$ = $1;}
	;

LDecl : TypeName {current_type = $1->typeEntry;} IdList SEMICOLON {$$ = makeDeclNode($1,$3);}
	;

IdList : IdList COMMA ID {$$ = makeConnectNode($1,makeVariableNode($3));}
	| ID {$$ = makeVariableNode($1);}
	;

Retstmt : RETURNN expr SEMICOLON { $$ = makeReturnNode($2); }
        ;

Body : BEGINN Slist Retstmt ENDD { $$ = makeConnectNode($2, $3); }
     | BEGINN Retstmt ENDD       { $$ = $2; }
     ;

ArgList : ArgList COMMA expr { $$ = makeConnectNode($1, $3); }
	| expr { $$ = $1; }
	;

MainBlock : INT MAIN '(' ')' '{' LdeclBlock Body '}'
            {
                $$ = makeFnDefNode(makeTypeNode(0), makeVariableNode("main"), NULL, $6, $7);
            }
          ;

Slist : Slist Stmt {$$ = makeConnectNode($1,$2);}
      | Stmt {$$ = $1;}
	  | {$$=NULL;}
	;

Stmt : InputStmt {$$ = $1;}
    | OutputStmt {$$ = $1;}
	| AsgStmt {$$ = $1;}
	| IfStmt {$$ = $1;}
	| WhileStmt {$$ = $1;}
	| BREAKK SEMICOLON {$$ = makeBreakNode();}
	| CONTINUEE SEMICOLON {$$ = makeContinueNode();}
	| DoWhileStmt {$$ = $1;}
	| RepeatStmt {$$ = $1;}
	| ID '(' ')' SEMICOLON
          { $$ = makeFnCallNode(makeVariableUseNode($1), NULL); }
    | ID '(' ArgList ')' SEMICOLON
          { $$ = makeFnCallNode(makeVariableUseNode($1), $3); }
	| ID ASSIGN ALLOC '(' ')' SEMICOLON { $$ = makeAssignNode(makeVariableUseNode($1), makeAllocNode(NULL)); }
	| Field ASSIGN ALLOC '(' ')' SEMICOLON { $$ = makeAssignNode($1, makeAllocNode(NULL)); }
	| FREE '(' ID ')' SEMICOLON { $$ = makeFreeNode(makeVariableUseNode($3)); }
	| FREE '(' Field ')' SEMICOLON { $$ = makeFreeNode($3); }
	| ID ASSIGN INITIALIZE '(' ')' SEMICOLON
    { $$ = makeAssignNode(makeVariableUseNode($1), makeInitializeNode()); }
	| ID ASSIGN NEW '(' ID ')' SEMICOLON
    {
        tnode* lhs = makeVariableUseNode($1);
        tnode* rhs = makeNewNode($5);
        // Check: rhs class must be same or descendant of lhs class
        Ctable* lhsClass = lhs->symbolTableEntry ?
                            lhs->symbolTableEntry->ctype : NULL;
        Ctable* rhsClass = rhs->classEntry;
        if (lhsClass != NULL && rhsClass != NULL) {
            if (!isDescendant(rhsClass, lhsClass)) {
                printf("Semantic Error: %s is not a descendant of %s\n",
                        rhsClass->name, lhsClass->name);
                exit(1);
            }
        }
        $$ = makeAssignNode(lhs, rhs);
    }
    | DELETE '(' ID ')' SEMICOLON
        { $$ = makeDeleteNode(makeVariableUseNode($3)); }
    | SELF '.' ID '(' ')' SEMICOLON
        { $$ = makeSelfMethodCallNode($3, NULL); }
    | SELF '.' ID '(' ArgList ')' SEMICOLON
        { $$ = makeSelfMethodCallNode($3, $5); }
    | ID '.' ID '(' ')' SEMICOLON
        { $$ = makeObjMethodCallNode(makeVariableUseNode($1), $3, NULL); }
    | ID '.' ID '(' ArgList ')' SEMICOLON
        { $$ = makeObjMethodCallNode(makeVariableUseNode($1), $3, $5); }
	;

InputStmt : READ'('ID')' SEMICOLON { $$ = makeReadNode(makeVariableUseNode($3)); }
	| READ'('ID'['expr']'')' SEMICOLON { $$ = makeReadNode(makeArrayAccessNode(makeVariableUseNode($3),$5)); }
	| READ'('ID'['expr']''['expr']'')' SEMICOLON { $$ = makeReadNode(makeArrayAccessNode(makeVariableUseNode($3),makeConnectNode($5,$8))); }
	| READ '(' Field ')' SEMICOLON { $$ = makeReadNode($3); }
	;

OutputStmt : WRITE'('expr')' SEMICOLON {$$ = makeWriteNode($3);}
	;

AsgStmt : ID ASSIGN expr SEMICOLON
{
    tnode* lhs = makeVariableUseNode($1);
    tnode* rhs = $3;
    Ctable* lhsClass = lhs->symbolTableEntry ?
                       lhs->symbolTableEntry->ctype : NULL;
    Ctable* rhsClass = rhs->classEntry ? rhs->classEntry :
                       (rhs->symbolTableEntry ? rhs->symbolTableEntry->ctype : NULL);
    if (lhsClass != NULL && rhsClass != NULL) {
        if (!isDescendant(rhsClass, lhsClass)) {
            printf("Semantic Error: Incompatible class assignment\n");
            exit(1);
        }
    }
    $$ = makeAssignNode(lhs, rhs);
}
| ID '['expr']' ASSIGN expr SEMICOLON { $$ = makeAssignNode(makeArrayAccessNode(makeVariableUseNode($1), $3), $6); }
| ID '['expr']''['expr']' ASSIGN expr SEMICOLON { $$ = makeAssignNode(makeArrayAccessNode(makeVariableUseNode($1), makeConnectNode($3,$6)), $9); }
| MUL expr ASSIGN expr SEMICOLON { $$ = makeAssignNode(makeDerefNode($2), $4); }
| Field ASSIGN expr SEMICOLON { $$ = makeAssignNode($1, $3); }
;

IfStmt : IF '('expr')' THEN Slist ELSE Slist ENDIF SEMICOLON {$$ = makeIfElseNode($3,$6,$8);}
	| IF '('expr')' THEN Slist ENDIF SEMICOLON {$$ = makeIfNode($3,$6);}
	;

WhileStmt : WHILE '('expr')' DO Slist ENDWHILE SEMICOLON {$$ = makeWhileNode($3,$6);}
	  ;

RepeatStmt:	REPEATT Slist UNTILL '(' expr ')' SEMICOLON {$$=makeRepeatNode($2,$5);}
	;

DoWhileStmt: DO Slist WHILE '(' expr ')' SEMICOLON	{$$=makeDoWhileNode($2,$5);}
	;

expr : expr PLUS expr			{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  		{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr			{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr			{$$ = makeOperatorNode('/',$1,$3);}
	 | expr MOD expr			{$$ = makeOperatorNode('%',$1,$3);}
	 | '(' expr ')'				{$$ = $2;}
	 | NUM						{$$ = $1;}
	 | ID						{$$ = makeVariableUseNode($1);}
	 | STRINGG					{$$ = $1;} 
	 | expr LT expr				{$$ = makeCOperatorNode('<',$1,$3);}
     | expr GT expr         	{$$ = makeCOperatorNode('>',$1,$3);}
     | expr LE expr         	{$$ = makeCOperatorNode('L',$1,$3);}
     | expr GE expr         	{$$ = makeCOperatorNode('G',$1,$3);}
     | expr NE expr         	{$$ = makeCOperatorNode('N',$1,$3);}
     | expr EQ expr         	{$$ = makeCOperatorNode('E',$1,$3);}
	 | ID'['expr']' 			{$$ = makeArrayAccessNode(makeVariableUseNode($1), $3);}
	 | ID'['expr']''['expr']' 	{$$ = makeArrayAccessNode(makeVariableUseNode($1), makeConnectNode($3,$6));}
	 | AMPERSAND ID				{$$ = makeAddrNode((tnode*)makeVariableUseNode($2));}
	 | MUL expr %prec UNARY { $$ = makeDerefNode($2); }
	 | ID'('')'					{$$ = makeFnCallNode(makeVariableUseNode($1),NULL);}
 	 | ID'('ArgList')'			{$$ = makeFnCallNode(makeVariableUseNode($1),$3);}
	 | Field  { $$ = $1; }
	 | NULLL { $$ = makeConstantNode(0); $$->typeEntry = TLookup("null"); }
	 | SELF '.' ID '(' ')'
        { $$ = makeSelfMethodCallNode($3, NULL); }
    | SELF '.' ID '(' ArgList ')'
        { $$ = makeSelfMethodCallNode($3, $5); }
    | ID '.' ID '(' ')'
        { $$ = makeObjMethodCallNode(makeVariableUseNode($1), $3, NULL); }
    | ID '.' ID '(' ArgList ')' { $$ = makeObjMethodCallNode(makeVariableUseNode($1), $3, $5);}
       
	;

%%

int yyerror(char const *s)
{
    printf("yyerror %s\n",s);
    return 0;
}

int main(void)
{
	initTypeTable();
	initClassTable();
    FILE *inputFile = fopen("input.txt","r");
    if (!inputFile)
	{
        printf("Could not open input.txt\n");
        return 1;
    }
    yyin = inputFile;

    if (yyparse() == 0)
	{
        if (ASTRoot != NULL)
		{
            print(ASTRoot);
            generate(ASTRoot);
        }
    }

    printSymbolTable();
	printClassTable();
    return 0;
}
