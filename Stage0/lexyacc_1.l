%{
#include "y.tab.h"  // include YACC token definitions
%}

%%

[a-zA-Z]        { yylval.c = yytext[0]; return ID; }   // single-character operands
[ \t]+          ;   // ignore spaces and tabs
"\n"            { return NEWLINE; }                   // newline to end expression

[+\-*/()]       { return yytext[0]; }                // operators and parentheses

.               { printf("Unknown character: %s\n", yytext); } // error for invalid chars

%%

int yywrap() { return 1; }
