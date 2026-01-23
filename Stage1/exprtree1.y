%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "exprtree1.h"
	#include "exprtree1.c"
	int yyerror(const char*);
	int yylex(void);
	struct tnode *root;
%}

%union{
	struct tnode *no;
	char *str;	
}

%type <no> expr program
%token <str> ID
%token <str> NUM
%token PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END	{
				root = $1;
				printf("Prefix form: ");
				printPrefix(root);
				printf("\nPostfix form: ");				
				printPostfix(root);
				printf("\n");
				exit(0);
			}
		;

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | ID			{$$ = makeLeafNode($1);}
	 | NUM			{$$ = makeLeafNode($1);}	 
;

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    return 0;
}


int main(void)
{
	yyparse();
	return 0;
}

