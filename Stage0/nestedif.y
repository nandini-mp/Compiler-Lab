%{
#include <stdio.h>

int level = 0;
int yylex();
void yyerror(const char *s);
extern FILE *yyin;
%}

%token IF ELSE ID

%%

program
    : stmt
    ;

stmt
    : matched_stmt
    | unmatched_stmt
    ;

matched_stmt
    : IF '(' expr ')' enter_if matched_stmt ELSE matched_stmt exit_if
    | ';'
    ;

unmatched_stmt
    : IF '(' expr ')' enter_if stmt exit_if
    | IF '(' expr ')' enter_if matched_stmt ELSE unmatched_stmt exit_if
    ;

enter_if
    :
      {
          level++;
          printf("IF found at level %d\n", level);
      }
    ;

exit_if
    :
      {
          level--;
      }
    ;

expr
    : ID
    ;

%%

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
    if (!yyin)
    {
        printf("Cannot open file\n");
        return 1;
    }
    yyparse();
    fclose(yyin);
    return 0;
}

void yyerror(const char *s)
{
    printf("Syntax error\n");
}

