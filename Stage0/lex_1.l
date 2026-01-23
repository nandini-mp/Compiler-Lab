%{
    #include <stdio.h>
    int lines=0;
    int words=0;
    int chars=0;
%}

%%

\n {lines++; chars++;}
[ \t]+ {chars+=yyleng;}
[^ \t\n]+ {words++; chars+=yyleng;}

%%

int main()
{
    yylex();
    printf("Number of lines is %d\n",lines);
    printf("Number of words is %d\n",words);
    printf("Number of characters is %d\n",chars);
    return 0;
}

int yywrap()
{
    return 1;
}

