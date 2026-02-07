%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <limits.h>
	#include <string.h>
	#include <stdbool.h>
	#include "control.h"
	#include "symbolTable/symbolTable.h"
	int yyerror(const char*);
	int yylex(void);
	extern FILE *yyin;
%}

%union{
	struct tnode *no;
	char* str;
}

%type <no> expr program Slist Stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt DeclList Varlist Declarations Decl Type RepeatStmt DoWhileStmt DeclID
%type <no> GDeclBlock FDefBlock MainBlock GdeclList GDecl GidList Gid ParamList Fdef LdeclBlock Body Param LDeclList LDecl IdList ArgList
%token <no> NUM STRINGG
%token <str> ID
%token PLUS MINUS MUL DIV BEGINN ENDD READ WRITE ASSIGN SEMICOLON
%token LT GT LE GE NE EQ
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAKK CONTINUEE REPEATT UNTILL
%token DECL ENDDECL COMMA INT STR
%token AMPERSAND MOD
%left PLUS MINUS
%left MUL DIV MOD
%nonassoc LT GT LE GE NE EQ
%right AMPERSAND
%nonassoc UNARY

%%

program : GDeclBlock FDefBlock MainBlock
	| GDeclBlock MainBlock
	| MainBlock
	;

GDeclBlock : DECL GdeclList ENDDECL {$$ = $2; parseDecl($2); print($$);}
	| DECL ENDDECL {$$ = NULL;}

GdeclList : GdeclList GDecl  {$$ = makeConnectNode($1,$2);}
	| GDecl {$$ = $1;}
	;

GDecl : Type GidList SEMICOLON {$$ = makeDeclNode($1,$2);}
	;

GidList : GidList COMMA Gid {$$ = makeConnectNode($1,$3);}
	| Gid {$$ = $1;}
	;

Gid : ID {$$ = makeVariableNode($1); $$->isPointer = 0;}
	| ID'['NUM']' {$$ = makeArrayNode(NULL,makeVariableNode($1),$3);}
	| ID'('ParamList')'{$$ = makeFnDeclNode(makeVariableNode($1),$3);}

FDefBlock : FDefBlock Fdef {$$ = makeConnectNode($1,$2);}
	| Fdef {$$ = $1;}
	;

Fdef : Type ID '('ParamList')' '{'LdeclBlock Body'}' {$$ = makeFnDefNode($1, makeVariableNode($2),$4,$7,$8);}

ParamList : ParamList COMMA Param {$$ = makeConnectNode($1,$3);}
	| Param {$$ = $1;}
	|		{$$ = NULL;}
	;

Param : Type ID {$$ = makeParamNode($1, makeVariableNode($2));}
	;

LdeclBlock : DECL LDeclList ENDDECL {$$ = $2;}
	| DECL ENDDECL {$$ = NULL;}
	;

LDeclList : LDeclList LDecl {$$ = makeConnectNode($1,$2);}
	| LDecl {$$ = $1;}
	;

LDecl : Type IdList SEMICOLON {$$ = NULL;}
	;

IdList : IdList COMMA ID {$$ = makeConnectNode($1,makeVariableNode($3));}
	| ID {$$ = makeVariableNode($1);}
	;

Body : Slist {$$ = $1;}
	;

ArgList : ArgList COMMA expr
	| expr
	;

MainBlock : Declarations BEGINN Slist ENDD SEMICOLON { $$ = makeConnectNode($1,$3); print($$); generate($$); exit(0);}
	| Declarations BEGINN ENDD SEMICOLON {$$=NULL;}
	;

Declarations : DECL DeclList ENDDECL {$$ = $2;}
	| DECL ENDDECL {$$ = NULL;}
	;

DeclList : DeclList Decl { $$ = makeConnectNode($1,$2); }
	| Decl { $$ = $1; }
	;

Decl : Type Varlist SEMICOLON { $$ = makeDeclNode($1, $2); }
	;

DeclID : ID { $$ = makeVariableNode($1); $$->isPointer = 0; }
	| MUL ID { $$ = makeVariableNode($2); $$->isPointer = 1; }

Type : INT {$$ = makeTypeNode(0); }
	|  STR {$$ = makeTypeNode(2); }
	;

Varlist : Varlist COMMA DeclID { $$ = makeConnectNode($1, $3); }
	| Varlist COMMA DeclID'['NUM']' { $$ = makeArrayNode($1,$3,$5); }
	| DeclID'['NUM']' { $$ = makeArrayNode(NULL,$1,$3); }
	| Varlist COMMA DeclID'['NUM']''['NUM']' { $$ = makeArrayNode($1,$3,makeConnectNode($5,$8)); }
	| DeclID'['NUM']''['NUM']' { $$ = makeArrayNode(NULL,$1,makeConnectNode($3,$6)); }
	| DeclID { $$ = $1; }
	;

Slist : Slist Stmt {$$ = makeConnectNode($1,$2);}
      | Stmt {$$ = $1;}
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
	;

InputStmt : READ'('ID')' SEMICOLON { $$ = makeReadNode(makeVariableUseNode($3)); }
	| READ'('ID'['expr']'')' SEMICOLON { $$ = makeReadNode(makeArrayAccessNode(makeVariableUseNode($3),$5)); }
	| READ'('ID'['expr']''['expr']'')' SEMICOLON { $$ = makeReadNode(makeArrayAccessNode(makeVariableUseNode($3),makeConnectNode($5,$8))); }
	;

OutputStmt : WRITE'('expr')' SEMICOLON {$$ = makeWriteNode($3);}
	;

AsgStmt : ID ASSIGN expr SEMICOLON { $$ = makeAssignNode(makeVariableUseNode($1), $3); }
	| ID '['expr']' ASSIGN expr SEMICOLON { $$ = makeAssignNode(makeArrayAccessNode(makeVariableUseNode($1), $3), $6); }
	| ID '['expr']''['expr']' ASSIGN expr SEMICOLON { $$ = makeAssignNode(makeArrayAccessNode(makeVariableUseNode($1), makeConnectNode($3,$6)), $9); }
	| MUL expr ASSIGN expr SEMICOLON { $$ = makeAssignNode(makeDerefNode($2), $4); }
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
	;

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    return 0;
}

int main(void)
{
	FILE *inputFile = fopen("input.txt","r");
	yyin = inputFile;
	yyparse();
	printSymbolTable();
	return 0;
}