#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include "control.h"
#include "label/label.h"

FILE* target_file;

bool registers[20];

void initializeRegisters()
{
	for (int i=0;i<20;i++)
		registers[i]=true;
}

int getFreeRegister()
{
	for (int i=0;i<20;i++)
		if (registers[i]==true)
		{
			registers[i]=false;
			return i;
		}
	printf("No free register\n");
	exit(1);
}

void releaseRegister(int reg)
{
	registers[reg]=true;
}

int variables[26];

int getVariableIndex(tnode* root)
{
	return (int)(root->varname[0]-'a');
}

int evaluate(tnode* root)
{
	if (!root) return -1;
	switch(root->nodetype)
	{
		case Nadd :
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l+r;
		}
		case Nsub :
        {
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l-r;
		}
		case Nmul :
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l*r;
		}
		case Ndiv :
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l/r;
		}
		case Nconnect :
		{
			evaluate(root->left);
			evaluate(root->right);
			return -1;
		}
		case Nconst : return root->val;
		case Nvar :
		{
			int i = getVariableIndex(root);
			return variables[i];
		}
		case Nassign :
		{
			int x = evaluate(root->right);
			int y = getVariableIndex(root->left);
			variables[y]=x;
			return -1;
		}
		case Nread :
		{
			int x = getVariableIndex(root->left);
			printf("Read ");
			scanf("%d",&variables[x]);
			return -1;
		}
		case Nwrite :
		{
			int x = evaluate(root->left);
			printf("Write %d\n",x);
			return -1;
		}
		case Nlt : 
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l<r;
		}
		case Ngt :
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l>r;
		}
		case Nle :
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l<=r;
		}
		case Nge :
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l>=r;
		}
		case Nne :
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l!=r;
		}
		case Neq :
		{
			int l = evaluate(root->left);
			int r = evaluate(root->right);
			return l==r;
		}
		case Nif :
		{
			int condition = evaluate(root->left);
			if (condition) evaluate(root->right);
			return -1;
		}
		case Nifelse :
		{
			int condition = evaluate(root->left);
			if (condition) evaluate(root->right->left);
			else evaluate(root->right->right);
			return -1;
		}
		case Nwhile :
		{
			while (evaluate(root->left))
				evaluate(root->right);
			return -1;
		}
	}
}

void evaluateAndPrint(tnode* root)
{
	for (int i=0;i<26;i++) variables[i]=0;
	evaluate(root);
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r)
{
	if (l->type!=0 || r->type!=0)
	{
		printf("Operand type not INT\n");
		exit(1);
	}	
	struct tnode *temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = INT_MAX;
	if (c=='+') temp->nodetype = Nadd;
	else if (c=='-') temp->nodetype = Nsub;
	else if (c=='*') temp->nodetype = Nmul;
	else temp->nodetype = Ndiv;
	temp->varname = NULL;
	temp->left = l;
	temp->right = r;
	temp->type = 0;
	return temp;
}

struct tnode* makeCOperatorNode(char c,struct tnode *l,struct tnode *r)
{
	if (l->type!=0 || r->type!=0)
	{
		printf("Operand type not INT\n");
		exit(1);
	}
	struct tnode *temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = INT_MAX;
	if (c=='<') temp->nodetype = Nlt;
	else if (c=='>') temp->nodetype = Ngt;
	else if (c=='L') temp->nodetype = Nle;
	else if (c=='G') temp->nodetype = Nge;
	else if (c=='N') temp->nodetype = Nne;
	else temp->nodetype = Neq;
	temp->varname = NULL;
	temp->left = l;
	temp->right = r;
	temp->type = 1;
	return temp;
}

struct tnode *makeConnectNode(tnode *l, tnode *r)
{
	tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = INT_MAX;
	temp->type = -1;
	temp->varname = NULL;
	temp->nodetype = Nconnect;
	temp->left = l;
	temp->right = r;
	return temp;
}

struct tnode *makeVariableNode(char* c)
{
	tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = INT_MAX;
	temp->type = 0;
	temp->varname = (char*)malloc(strlen(c)+1);
	strcpy(temp->varname,c);
	temp->nodetype = Nvar;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

struct tnode *makeConstantNode(int n)
{
	tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = n;
	temp->type = 0;
	temp->varname = NULL;
	temp->nodetype = Nconst;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

struct tnode* makeAssignNode(tnode *l,tnode* r)
{
	if (r->type!=0)
	{
		printf("Right side of assignment not INT\n");
		exit(1);
	}
	tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = INT_MAX;
	temp->type = -1;
	temp->varname = NULL;
	temp->nodetype = Nassign;
	temp->left = l;
	temp->right = r;
	return temp;
}

struct tnode* makeReadNode(tnode* t)
{
	tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = INT_MAX;
	temp->type = -1;
	temp->varname = NULL;
	temp->nodetype = Nread;
	temp->left = t;
	temp->right = NULL;
	return temp;
}

struct tnode* makeWriteNode(tnode* t)
{
	tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = INT_MAX;
	temp->type = -1;
	temp->varname = NULL;
	temp->nodetype = Nwrite;
	temp->left = t;
	temp->right = NULL;
	return temp;
}

void printNodes(tnode *root)
{
	switch(root->nodetype)
	{
		case Nadd : printf("+\n");
			    	break; 
		case Nsub : printf("-\n");
                    break;
		case Nmul : printf("*\n");
                    break;
		case Ndiv : printf("/\n");
                    break;
		case Nassign : printf("Assign\n");
                    	break;
		case Nconnect : printf("Connect\n");
                        break;
		case Nvar : printf("%s\n",root->varname);
                    break;
		case Nconst : printf("%d\n",root->val);
                    break;
		case Nread : printf("Read\n");
                    break;
		case Nwrite : printf("Write\n");
                    break;
		case Nif : printf("If\n");
			   		break;
		case Nifelse : printf("IfElse\n");
			     		break;
		case Nwhile : printf("While\n");
			      		break;
		case Nlt : printf("LessThan\n");
			   		break; 
		case Ngt : printf("GreaterThan\n");
                    break;
		case Nle : printf("LessThanOrEquals\n");
					break;
		case Nge : printf("GreaterThanOrEquals\n");
                    break;
		case Nne : printf("NotEqual\n");
                    break;
		case Neq : printf("Equals\n");
                    break;

	}
}

void print(tnode* root)
{
	if (!root) return;
	printNodes(root);
	print(root->left);
	print(root->right);
}

struct tnode* createTree(int val, int type, char* varname, int nodetype, struct tnode *l, struct tnode *r)
{
	struct tnode* temp;
	if (val!=INT_MAX) return makeConstantNode(val);
	else if (varname!=NULL) return makeVariableNode(varname);
	else
	{
		temp = (tnode*)malloc(sizeof(tnode));
		temp->val = INT_MAX;
		temp->type = type;
		temp->nodetype = nodetype;
		temp->varname = NULL;
		temp->left = l;
		temp->right = r;		
	}
	return temp;
}

struct tnode* makeIfElseNode(tnode* con, tnode* left, tnode* right)
{
	if (con->type!=1)
	{
		printf("Condition not Boolean type\n");
		exit(1);
	}
	tnode* temp = (tnode*)malloc(sizeof(tnode));
	tnode* conn = makeConnectNode(left,right);
	temp->left = con;
	temp->right = conn;
	temp->val = INT_MAX;
	temp->nodetype = Nifelse;
	temp->type = -1;
	temp->varname = NULL;
	return temp;
}

struct tnode* makeIfNode(tnode* con, tnode* stmt)
{
	if (con->type!=1)
	{
	 	printf("Condition not Boolean type\n");
                exit(1);
	}
	tnode* temp = (tnode*)malloc(sizeof(tnode));
	temp->left = con;
	temp->right = stmt;
	temp->val = INT_MAX;
	temp->nodetype = Nif;
	temp->type = -1;
	temp->varname = NULL;
	return temp;
}

struct tnode* makeWhileNode(tnode* con, tnode* stmt)
{
    if (con->type!=1)
    {
		printf("Condition not Boolean type\n");
		exit(1);
	}
	tnode* temp = (tnode*)malloc(sizeof(tnode));
	temp->left = con;
	temp->right = stmt;	
	temp->val = INT_MAX;
	temp->nodetype = Nwhile;
	temp->type = -1;
	temp->varname = NULL;
	return temp;
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
	int d = getFreeRegister();
	int e = getFreeRegister();
	fprintf(target_file,"MOV R%d, \"%s\"\n",a,"Read");
	fprintf(target_file,"PUSH R%d\n",a);
	fprintf(target_file,"MOV R%d, %d\n",b,-1);
	fprintf(target_file,"PUSH R%d\n",b);
	fprintf(target_file,"MOV R%d, %d\n",c,mem);
	fprintf(target_file,"PUSH R%d\n",c);
	fprintf(target_file,"PUSH R%d\n",d);
	fprintf(target_file,"PUSH R%d\n",e);
	fprintf(target_file,"CALL 0\n");
	fprintf(target_file,"SUB SP,5\n");
	releaseRegister(a);
	releaseRegister(b);
	releaseRegister(c);
	releaseRegister(d);
	releaseRegister(e);
}

void genWriteInstr(int x)
{
	int a = getFreeRegister();
	int b = getFreeRegister();
	int c = getFreeRegister();
	int d = getFreeRegister();
	fprintf(target_file,"MOV R%d, \"%s\"\n",a,"Write");
	fprintf(target_file,"PUSH R%d\n",a);
	fprintf(target_file,"MOV R%d, %d\n",b,-2);
	fprintf(target_file,"PUSH R%d\n",b);
	fprintf(target_file,"PUSH R%d\n",x);
	fprintf(target_file,"PUSH R%d\n",c);
	fprintf(target_file,"PUSH R%d\n",d);
	fprintf(target_file,"CALL 0\n");
	fprintf(target_file,"SUB SP,5\n");
	releaseRegister(a);
	releaseRegister(b);
	releaseRegister(c);
	releaseRegister(d);
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

int genLoadVarInstr(tnode* root)
{
    int x = genAddressOfVar(root);
    int y = getFreeRegister();
    fprintf(target_file,"MOV R%d, [%d]\n",y,x);
    return y;
}

void genConditionCode(tnode* root, int falseLabel)
{
	int left = codeGen(root->left);
	int right = codeGen(root->right);
	switch(root->nodetype)
	{
		case Nlt : fprintf(target_file,"LT R%d, R%d\n",left, right);
					break;
		case Ngt : fprintf(target_file,"GT R%d, R%d\n",left, right);
					break;
		case Nle : fprintf(target_file,"LE R%d, R%d\n",left, right);
					break;
		case Nge : fprintf(target_file,"GE R%d, R%d\n",left, right);
					break;
		case Nne : fprintf(target_file,"NE R%d, R%d\n",left, right);
					break;
		case Neq : fprintf(target_file,"EQ R%d, R%d\n",left, right);
					break;
	}
	fprintf(target_file,"JZ R%d, L%d\n",left,falseLabel);
	releaseRegister(right);
	releaseRegister(left);
}

void genIfElseCode(tnode* root)
{
	int elseLabel = getLabel();
	int restLabel = getLabel();
	tnode* con = root->left;
	tnode* ifstmt = root->right->left;
	tnode* elsestmt = root->right->right;
	genConditionCode(con,elseLabel);
	codeGen(ifstmt);
	fprintf(target_file,"JMP L%d\n",restLabel);
	fprintf(target_file,"L%d:\n",elseLabel);
	codeGen(elsestmt);
	fprintf(target_file,"L%d:\n",restLabel);
}

void genIfCode(tnode* root)
{
	int restLabel = getLabel();
	tnode* con = root->left;
	tnode* ifstmt = root->right;
	genConditionCode(con,restLabel);
	codeGen(ifstmt);
	fprintf(target_file,"L%d:\n",restLabel);
}

void genWhileCode(tnode* root)
{
	int loopLabel = getLabel();
	int restLabel = getLabel();
	tnode* con = root->left;
	tnode* stmt = root->right;
	fprintf(target_file,"L%d:\n",loopLabel);
	genConditionCode(con,restLabel);
	codeGen(stmt);
	fprintf(target_file,"JMP L%d\n",loopLabel);
	fprintf(target_file,"L%d:\n",restLabel);
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
		case Nifelse :
		{
			genIfElseCode(root);
			return -1;
		}
		case Nif :
		{
			genIfCode(root);
			return -1;
		}
		case Nwhile :
		{
			genWhileCode(root);
			return -1;
		}
	}
}

void generate(tnode* root)
{
	target_file = fopen("intermediate.xsm","w");
	initializeRegisters();
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(target_file, "BRKP\n");
    fprintf(target_file, "MOV SP, %d\n",4121);
	codeGen(root);
	generateExit();
}
