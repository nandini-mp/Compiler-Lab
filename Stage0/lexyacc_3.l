%{
#include "y.tab.h"
#include <string.h>
%}

%%

[a-zA-Z_][a-zA-Z0-9_]*  { yylval.str = strdup(yytext); return ID; }
[ \t]+                   ;
"\n"                     { return NEWLINE; }
[+\-*/()]                { return yytext[0]; }
.                        { printf("Unknown character: %s\n", yytext); }

%%

int yywrap() { return 1; }
