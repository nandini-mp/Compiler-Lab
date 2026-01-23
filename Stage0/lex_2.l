%{
    #include <stdio.h>
    int intCount=0;
    int floatCount=0;    
%}

integer [0-9]+
float [0-9]+\.[0-9]+

%%

{float} {floatCount++;}
{integer} {intCount++;}

%%

int main()
{
    yylex();
    printf("The number of integers is %d\n",intCount);
    printf("The number of floats is %d\n",floatCount);
}

int yywrap()
{
    return 1;
}
