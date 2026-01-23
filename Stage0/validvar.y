%{
#include<stdio.h>
int yylex(void);
int yyerror(const char *s);
%}

%union{
	char *str;
	}

%token <str> ID
%token INVALID

%%

start:  | idss	
	;
idss: 	  ID	{printf("%s ",$1);}
	| INVALID {}
	| idss ID	{printf("%s ",$2);}
	| idss INVALID {}
	;

%%

int main()
{
	yyparse();
	return 0;
}

int yyerror(const char *s)
{
	printf("ERROR");
	return 0;
}
