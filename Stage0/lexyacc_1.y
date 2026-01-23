%{
	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);
	void yyerror(const char* s);
	extern FILE* yyin;
%}

%union { char c; }
%token <c> ID
%token NEWLINE

%left '+' '-'
%left '*' '/'
 
%%

start : expr NEWLINE  {
                        printf("\nComplete\n");
                        exit(1);
                      }
  ;

expr:  expr '+' expr        {printf("+");}
  | expr '-' expr     {printf("-");}
  | expr '*' expr     {printf("*");}
  | expr '/' expr     {printf("/");}
  | '(' expr ')'
  | ID             {printf("%c",$1);}
  ;

%%

void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}
int main()
{
  yyparse();
  return 1;
}
