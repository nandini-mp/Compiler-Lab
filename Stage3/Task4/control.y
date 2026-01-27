%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <limits.h>
	#include <string.h>
	#include <stdbool.h>
	#include "control.h"
	int yyerror(const char*);
	int yylex(void);
	extern FILE *yyin;
%}

%union{
	struct tnode *no;	
}

%type <no> expr program Slist Stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt
%token <no> ID NUM
%token PLUS MINUS MUL DIV BEGINN ENDD READ WRITE ASSIGN SEMICOLON LT GT LE GE NE EQ IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAKK CONTINUEE
%left PLUS MINUS
%left MUL DIV
%nonassoc LT GT LE GE NE EQ

%%

program : BEGINN Slist ENDD SEMICOLON { generate($2); exit(0);}
	| BEGINN ENDD SEMICOLON {$$=NULL;}
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
	;

InputStmt : READ'('ID')' SEMICOLON {$$ = makeReadNode($3);}
	;

OutputStmt : WRITE'('expr')' SEMICOLON {$$ = makeWriteNode($3);}
	;

AsgStmt : ID ASSIGN expr SEMICOLON {$$ = makeAssignNode($1,$3);}
	;

IfStmt : IF '('expr')' THEN Slist ELSE Slist ENDIF SEMICOLON {$$ = makeIfElseNode($3,$6,$8);}
	| IF '('expr')' THEN Slist ENDIF SEMICOLON {$$ = makeIfNode($3,$6);}
	;

WhileStmt : WHILE '('expr')' DO Slist ENDWHILE SEMICOLON {$$ = makeWhileNode($3,$6);}
	  ;

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 | ID			{$$ = $1;} 
	 | expr LT expr		{$$ = makeCOperatorNode('<',$1,$3);}
         | expr GT expr         {$$ = makeCOperatorNode('>',$1,$3);}
         | expr LE expr         {$$ = makeCOperatorNode('L',$1,$3);}
         | expr GE expr         {$$ = makeCOperatorNode('G',$1,$3);}
         | expr NE expr         {$$ = makeCOperatorNode('N',$1,$3);}
         | expr EQ expr         {$$ = makeCOperatorNode('E',$1,$3);}
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
	return 0;
}
