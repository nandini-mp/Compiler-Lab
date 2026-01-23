%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exprtree1.h"
	void yyerror(const char*);
%}

%%

[0-9]+	{yylval.str = strdup(yytext); return NUM;}
[a-zA-Z_][a-zA-Z0-9_]* {yylval.str = strdup(yytext); return ID;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
[ \t]	{}
[()]	{return *yytext;}
[\n]	{return END;}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}
