%{
        #include <stdlib.h>
        #include <stdio.h>
        #include "y.tab.h"
        #include "codegen.h"
        void yyerror(const char*);
        int number;

%}

%%

[0-9]+  {number = atoi(yytext); yylval.no = makeConstantNode(number); return NUM;}
"+"     {return PLUS;}
"-"     {return MINUS;}
"*"     {return MUL;}
"/"     {return DIV;}
"="	{return ASSIGN;}
";"	{return SEMICOLON;}
"begin" {return BEGINN;}
"end"	{return ENDD;}
"read"	{return READ;}
"write"	{return WRITE;}
[a-z]	{yylval.no = makeVariableNode(yytext); return ID;}
[ \t]   {}
[()]    {return *yytext;}
[\n]    {}
.       {yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
        return 1;
}

