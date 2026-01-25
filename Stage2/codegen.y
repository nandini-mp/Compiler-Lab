%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <limits.h>
	#include <string.h>
	#include <stdbool.h>
	#include "codegen.h"
	#include "codegen.c"
	int yyerror(const char*);
	int yylex(void);
	void generateExit();
	void store(int x,int reg);
	void write(int r);
	void initializeRegisters();
	int getFreeRegister();
	void releaseRegister(int regNo);
	int genAddInstr(int l,int r);
	int genSubInstr(int l,int r);
	int genMulInstr(int l,int r);
	int genDivInstr(int l,int r);
	void genWriteToMemInstr(int l,int r);
	void genReadInstr(int mem);
	void genWriteInstr(int mem);
	int genConstInstr(int val);
	int genAddressOfVar(tnode* root);
	int genAssignInstr(tnode* root);
	int genLoadVarInstr(tnode* root);
	int codeGen(tnode* root);
	void generate(tnode* root);
	extern FILE *yyin;
%}

%union{
	struct tnode *no;	
}

%type <no> expr program Slist Stmt InputStmt OutputStmt AsgStmt
%token <no> ID NUM
%token PLUS MINUS MUL DIV BEGINN ENDD READ WRITE ASSIGN SEMICOLON
%left PLUS MINUS
%left MUL DIV

%%

program : BEGINN Slist ENDD SEMICOLON { generate($2); exit(0);}
	| BEGINN ENDD SEMICOLON {$$=NULL;}
		;

Slist : Slist Stmt {$$ = makeConnectNode($1,$2);}
      | Stmt {$$ = $1;}
	;

Stmt : InputStmt {$$ = $1;}
     	| OutputStmt {$$ = $1;}
	| AsgStmt {$$ = $1;}
	;

InputStmt : READ'('ID')' SEMICOLON {$$ = makeReadNode($3);}

OutputStmt : WRITE'('expr')' SEMICOLON {$$ = makeWriteNode($3);}

AsgStmt : ID ASSIGN expr SEMICOLON {$$ = makeAssignNode($1,$3);}


expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 | ID			{$$ = $1;} 
	;

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    return 0;
}

void generateExit()
{
	int r1=getFreeRegister();
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
	releaseRegister(r1);
}

void store(int x,int reg)
{
	fprintf(target_file,"MOV [%d],R%d\n",x,reg);
	return;
}

void write(int loc)
{
	int r1=getFreeRegister();
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
        releaseRegister(r1);
}

int genAddInstr(int l,int r)
{
	fprintf(target_file,"ADD R%d, R%d\n",l,r);
	releaseRegister(r);
	return l;
}

int genSubInstr(int l,int r)
{
        fprintf(target_file,"SUB R%d, R%d\n",l,r);
        releaseRegister(r);
        return l;
}

int genMulInstr(int l,int r)
{
        fprintf(target_file,"MUL R%d, R%d\n",l,r);
        releaseRegister(r);
        return l;
}

int genDivInstr(int l,int r)
{
        fprintf(target_file,"DIV R%d, R%d\n",l,r);
        releaseRegister(r);
        return l;
}

void genWriteToMem(int r,int mem)
{
	fprintf(target_file,"MOV [%d],R%d\n",mem,r);
}

void genReadInstr(int mem)
{
	int a = getFreeRegister();
        int b = getFreeRegister();
        int c = getFreeRegister();
	fprintf(target_file,"MOV R%d, \"%s\"\n",a,"Read");
	fprintf(target_file,"PUSH R%d\n",a);
	fprintf(target_file,"MOV R%d, %d\n",b,-1);
	fprintf(target_file,"PUSH R%d\n",b);
	fprintf(target_file,"MOV R%d, %d\n",c,mem);
	fprintf(target_file,"PUSH R%d\n",c);
	fprintf(target_file,"PUSH R%d\n",c);
	fprintf(target_file,"PUSH R%d\n",c);
	fprintf(target_file,"CALL 0\n");
	fprintf(target_file,"SUB SP,5\n");
	releaseRegister(a);
	releaseRegister(b);
	releaseRegister(c);
}

void genWriteInstr(int mem)
{
        int a = getFreeRegister();
        int b = getFreeRegister();
        int c = getFreeRegister();
        fprintf(target_file,"MOV R%d, \"%s\"\n",a,"Write");
        fprintf(target_file,"PUSH R%d\n",a);
        fprintf(target_file,"MOV R%d, %d\n",b,-2);
        fprintf(target_file,"PUSH R%d\n",b);
        fprintf(target_file,"PUSH R%d\n",mem);
        fprintf(target_file,"PUSH R%d\n",c);
        fprintf(target_file,"PUSH R%d\n",c);
        fprintf(target_file,"CALL 0\n");
        fprintf(target_file,"SUB SP,5\n");
        releaseRegister(a);
        releaseRegister(b);
        releaseRegister(c);
}


int genConstInstr(int val)
{
	int reg = getFreeRegister();
	fprintf(target_file,"MOV R%d,%d\n",reg,val);
	return reg;
}

int genAddressOfVar(tnode* t)
{
        int offset = (int)t->varname[0]-'a';
        return 4096+offset;
}

int genAssignInstr(tnode *t)
{
	int mem = genAddressOfVar(t->left);
	int evalExprReg = codeGen(t->right);
	fprintf(target_file,"MOV [%d],R%d\n",mem,evalExprReg);
	return -1;
}

int genLoadVarInstr(tnode* root){
    int x = genAddressOfVar(root);
    int y = getFreeRegister();
    fprintf(target_file,"MOV R%d, [%d]\n",y,x);
    return y;
}

int codeGen(tnode* root)
{
	if (!root) return -1;
	switch (root->nodetype)
	{
		case Nadd :
		{
			int l = codeGen(root->left);
			int r = codeGen(root->right);
			return genAddInstr(l,r);
		}
		case Nsub :
                {
                        int l = codeGen(root->left);
                        int r = codeGen(root->right);
                        return genSubInstr(l,r);
                }
		case Nmul :
                {
                        int l = codeGen(root->left);
                        int r = codeGen(root->right);
                        return genMulInstr(l,r);
                }
		case Ndiv :
                {
                        int l = codeGen(root->left);
                        int r = codeGen(root->right);
                        return genDivInstr(l,r);
                }
		case Nassign : return genAssignInstr(root);
		case Nconnect :
		{
			codeGen(root->left);
			codeGen(root->right);
			return -1;
		}
		case Nvar : return genLoadVarInstr(root);
		case Nconst : return genConstInstr(root->val);
		case Nread :
		{
			int x = genAddressOfVar(root->left);
			genReadInstr(x);
			return -1;
		}
		case Nwrite :
		{
			int x = codeGen(root->left);
			genWriteInstr(x);
			return -1;
		}
	}
}

void generate(tnode* root)
{
	target_file = fopen("out.xsm","w");
	initializeRegisters();
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
        fprintf(target_file, "BRKP\n");
        fprintf(target_file, "MOV SP, %d\n",4096);
	codeGen(root);
	generateExit();
}


int main(void)
{
	FILE *inputFile = fopen("input.txt","r");
	yyin = inputFile;
	yyparse();
	fclose(target_file);
	return 0;
}
