%{
#include<stdio.h>
#include "y.tab.h"
FILE *yyin;
%}
%%
"if"	{return IF;}
"else"	{return ELSE;}
[a-zA-Z]+	{return ID;}
"("	{return '(';}
")"	{return ')';}
"{"	{return '{';}
"}"	{return '}';}
";"	{return ';';}
.|[ \t\n]+	;

%%

int yywrap(){
	return 1;
}
