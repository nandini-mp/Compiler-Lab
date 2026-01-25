%{
        #include <stdlib.h>
        #include <stdio.h>
        #include "y.tab.h"
        #include "control.h"
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
"<"	{return LT;}
">"	{return GT;}
"<="	{return LE;}
">="	{return GE;}
"=="	{return EQ;}
"!="	{return NE;}
"begin" {return BEGINN;}
"end"	{return ENDD;}
"read"	{return READ;}
"Write"	{return WRITE;}
"if"	{return IF;}
"then"	{return THEN;}
"else"	{return ELSE;}
"endif"	{return ENDIF;}
"while"	{return WHILE;}
"do"	{return DO;}
"endwhile" {return ENDWHILE;}

[a-z]	{yylval.no = makeVariableNode(yytext); return ID;}
[ \t]   {}
[()]    {return *yytext;}
[\n]    {}
.       {yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
        return 1;
}


