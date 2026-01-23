%{
    #include <stdio.h>
    #include <ctype.h>    
%}

%%

^A[a-zA-Z][a-zA-Z]$ {
    for (int i=0;yytext[i];i++)
        yytext[i]=toupper(yytext[i]);
    printf("%s\n",yytext);
}

.|\n {/*ignore*/}

%%

int main()
{
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}
