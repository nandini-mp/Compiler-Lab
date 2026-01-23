%{
#include <stdio.h>
#include "y.tab.h"
%}

%%
[0-9]+[a-zA-Z_][a-zA-Z0-9_]* {
    printf("Invalid identifier: %s\n", yytext);
    return INVALID;
}
[a-zA-Z_][a-zA-Z0-9_]*   {yylval.str = strdup(yytext); return ID;}
.|[ \t\n]+               ;               
%%

int yywrap(){
    return 1;
}

