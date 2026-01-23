%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree_codegen.h"
	#include "exprtree_codegen.c"
	int yyerror(const char*);
	int yylex(void);
	void generateExit();
	void store(int x,int reg);
	void write(int r);
%}

%union{
	struct tnode *no;	
}

%type <no> expr program
%token <no> NUM
%token PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END	{
				store(4096,codeGen($1));
				write(4096);
				generateExit();
				printf("Answer : %d\n",evaluate($1));
				exit(0);
			}
		;

expr :     PLUS expr expr	{$$ = makeOperatorNode('+',$2,$3);}
	 | MINUS expr expr  	{$$ = makeOperatorNode('-',$2,$3);}
	 | MUL expr expr	{$$ = makeOperatorNode('*',$2,$3);}
	 | DIV expr expr	{$$ = makeOperatorNode('/',$2,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 ;

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    return 0;
}

void generateExit()
{
	int r1=getReg();
	fprintf(target_file,"MOV R%d,\"%s\"\n",r1,"Exit");
	fprintf(target_file,"PUSH R%d\n",r1);
        fprintf(target_file,"PUSH R%d\n",r1);
        fprintf(target_file,"PUSH R%d\n",r1);
        fprintf(target_file,"PUSH R%d\n",r1);
        fprintf(target_file,"PUSH R%d\n",r1);
        fprintf(target_file,"CALL 0\n");
        fprintf(target_file,"POP R%d\n",r1);
        fprintf(target_file,"POP R%d\n",r1);
        fprintf(target_file,"POP R%d\n",r1);
        fprintf(target_file,"POP R%d\n",r1);
        fprintf(target_file,"POP R%d\n",r1);
	freeReg();
}

void store(int x,int reg)
{
	fprintf(target_file,"MOV [%d],R%d\n",x,reg);
	return;
}

void write(int loc)
{
	int r1=getReg();
	fprintf(target_file,"MOV R%d,\"%s\"\n",r1,"Write");
        fprintf(target_file,"PUSH R%d\n",r1);
	fprintf(target_file,"MOV R%d, %d\n",r1,-2);
        fprintf(target_file,"PUSH R%d\n",r1);
	fprintf(target_file,"MOV R%d, [%d]\n",r1,loc);
        fprintf(target_file,"PUSH R%d\n",r1);
        fprintf(target_file,"PUSH R%d\n",r1);
        fprintf(target_file,"PUSH R%d\n",r1);
        fprintf(target_file,"CALL 0\n");
        fprintf(target_file,"POP R%d\n",r1);
        fprintf(target_file,"POP R%d\n",r1);
        fprintf(target_file,"POP R%d\n",r1);
        fprintf(target_file,"POP R%d\n",r1);
        fprintf(target_file,"POP R%d\n",r1);
        freeReg();
}


int main(void)
{
	target_file = fopen("out.xsm","w");
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(target_file, "BRKP\n");
	fprintf(target_file, "MOV SP, %d\n",4096);
	yyparse();
	fclose(target_file);
	return 0;
}

