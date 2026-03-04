#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include "control.h"
#include "label/label.h"
#include "symbolTable/symbolTable.h"

FILE* target_file;
extern int stackVal;
extern int current_type;
extern int inLocalDecl;
extern struct Lsymbol* LSThead;
int currentFnLocalCount = 0;
int fnHasReturned = 0;

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

struct tnode* makeOperatorNode(char c, struct tnode *l, struct tnode *r)
{
    int leftType = l->type;
    int rightType = r->type;
    if (l->symbolTableEntry) leftType = l->symbolTableEntry->type;
    if (r->symbolTableEntry) rightType = r->symbolTableEntry->type;
    if (leftType != 0 || rightType != 0)
    {
        printf("Semantic Error: Operator %c requires INT operands. Got Left:%d, Right:%d\n", c, leftType, rightType);
        exit(1);
    }
    struct tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = INT_MAX;
    if (c=='+') temp->nodetype = Nadd;
    else if (c=='-') temp->nodetype = Nsub;
    else if (c=='*') temp->nodetype = Nmul;
    else if (c=='/') temp->nodetype = Ndiv;
    else if (c=='%') temp->nodetype = Nmod;

    temp->left = l;
    temp->right = r;
    temp->type = 0;
    temp->varname = NULL;
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

    // attach symbol table entries if available
    temp->localSymbolTableEntry = LLookup(c);
    if (temp->localSymbolTableEntry != NULL) {
        temp->symbolTableEntry = NULL;
		temp->localBinding = temp->localSymbolTableEntry->binding;
        temp->type = temp->localSymbolTableEntry->type;
    } else {
        temp->symbolTableEntry = Lookup(c);
        if (temp->symbolTableEntry != NULL) {
            temp->type = temp->symbolTableEntry->type;
        }
    }

    temp->isPointer = 0;
    temp->isFunction = 0;
    temp->paramlist = NULL;
    temp->body = NULL;
    temp->ldeclblock = NULL;

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
	if (r->type!=0 && r->type!=2)
	{
		printf("Right side of assignment not INT/STR\n");
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
		case Nbreak : printf("Break\n");
					break;
		case Ncontinue : printf("Continue\n");
					break;
		case Nrepeat : printf("Repeat\n");
					break;
		case Ndowhile : printf("DoWhile\n");
					break;
		case Ndecl : printf("Decl\n");
					break;
		case Ntype : printf("Type %d\n",root->type);
					break;
		case Nstr : printf("%s\n",root->strVal);
					break;
		case Narr : printf("ArrayDecl\n");
					break;
		case Narraccess : printf("ArrayAccess\n");
						  break;
		case Naddr : printf("PtrAddr\n");
					 break;
		case Nderef : printf("Deref\n");
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
        temp->symbolTableEntry = NULL;
        temp->localSymbolTableEntry = NULL;
        temp->isPointer = 0;
        temp->isFunction = 0;
        temp->paramlist = NULL;
        temp->body = NULL;
        temp->ldeclblock = NULL;
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

void genReadInstr(int memreg) {
    int a = getFreeRegister();
    int b = getFreeRegister();
    int d = getFreeRegister();
    int e = getFreeRegister();

    fprintf(target_file, "MOV R%d, \"%s\"\n", a, "Read");
    fprintf(target_file, "PUSH R%d\n", a);
    fprintf(target_file, "MOV R%d, -1\n", b);
    fprintf(target_file, "PUSH R%d\n", b);
    fprintf(target_file, "PUSH R%d\n", memreg);
    fprintf(target_file, "PUSH R%d\n", d);
    fprintf(target_file, "PUSH R%d\n", e);
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "SUB SP, 5\n");

    releaseRegister(a);
    releaseRegister(b);
    releaseRegister(memreg);
    releaseRegister(d);
    releaseRegister(e);
}

void genWriteInstr(int reg) {
    int a = getFreeRegister();
    int b = getFreeRegister();
    int c = getFreeRegister();
    int d = getFreeRegister();

    fprintf(target_file, "MOV R%d, \"%s\"\n", a, "Write");
    fprintf(target_file, "PUSH R%d\n", a);
    fprintf(target_file, "MOV R%d, -2\n", b); 
    fprintf(target_file, "PUSH R%d\n", b);
    fprintf(target_file, "PUSH R%d\n", reg);
    fprintf(target_file, "PUSH R%d\n", c);
    fprintf(target_file, "PUSH R%d\n", d);
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "SUB SP, 5\n");

    releaseRegister(a);
    releaseRegister(b);
    releaseRegister(c);
    releaseRegister(d);
    releaseRegister(reg);
}


int genConstInstr(int val)
{
	int reg = getFreeRegister();
	fprintf(target_file,"MOV R%d,%d\n",reg,val);
	return reg;
}

int genAddressOfVar(tnode* t) {
    int addrReg = getFreeRegister();

    // Use the bindings stored in the AST node.
    if (t->localSymbolTableEntry != NULL) {
        // Local: binding is relative to BP
        fprintf(target_file, "MOV R%d, BP\n", addrReg);
        fprintf(target_file, "ADD R%d, %d\n", addrReg, t->localBinding);
    }
    else if (t->symbolTableEntry != NULL) {
        // Global: absolute binding
        fprintf(target_file, "MOV R%d, %d\n", addrReg, t->symbolTableEntry->binding);
    }
    else {
        // If both are NULL, treat as a late resolution only once
        Lsymbol *l = LLookup(t->varname);
        if (l != NULL) {
            t->localSymbolTableEntry = l;
            t->type = l->type;
			t->localBinding = l->binding;
            fprintf(target_file, "MOV R%d, BP\n", addrReg);
            fprintf(target_file, "ADD R%d, %d\n", addrReg, t->localBinding);
        } else {
            Gsymbol *g = Lookup(t->varname);
            if (g != NULL) {
                t->symbolTableEntry = g;
                t->type = g->type;
                fprintf(target_file, "MOV R%d, %d\n", addrReg, g->binding);
            } else {
                printf("Error: Variable %s undeclared\n", t->varname);
                exit(1);
            }
        }
    }

    return addrReg;
}


int genAssignInstr(tnode *t)
{
    // Evaluate RHS first
    int evalExprReg = codeGen(t->right);

    // Then compute LHS address (after RHS is done, so no clobbering)
    int addressReg;
    if (t->left->nodetype == Nderef) {
        addressReg = codeGen(t->left->left);
    }
    else if (t->left->nodetype == Narraccess) {
        addressReg = genArrayAddress(t->left);
    }
    else {
        addressReg = genAddressOfVar(t->left);
    }

    fprintf(target_file, "MOV [R%d], R%d\n", addressReg, evalExprReg);

    releaseRegister(addressReg);
    releaseRegister(evalExprReg);
    return -1;
}

int genLoadVarInstr(tnode* root)
{
    int addrReg = genAddressOfVar(root);
    int dataReg = getFreeRegister();
    fprintf(target_file,"MOV R%d, [R%d]\n",dataReg,addrReg);
    releaseRegister(addrReg);
	return dataReg;
}

int genConditionCode(tnode* root, int falseLabel)
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
	return left;
}

void genIfElseCode(tnode* root)
{
	int elseLabel = getLabel();
	int restLabel = getLabel();
	tnode* con = root->left;
	tnode* ifstmt = root->right->left;
	tnode* elsestmt = root->right->right;
	int reg = genConditionCode(con,elseLabel);
	fprintf(target_file, "JZ R%d, L%d\n", reg, restLabel);
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
	int reg = genConditionCode(con,restLabel);
	fprintf(target_file, "JZ R%d, L%d\n", reg, restLabel);
	codeGen(ifstmt);
	fprintf(target_file,"L%d:\n",restLabel);
}

void genWhileCode(tnode* root)
{
	int loopLabel = getLabel();
	int restLabel = getLabel();
	pushStack(loopLabel,restLabel);
	tnode* con = root->left;
	tnode* stmt = root->right;
	fprintf(target_file,"L%d:\n",loopLabel);
	int reg = genConditionCode(con,restLabel);
	fprintf(target_file, "JZ R%d, L%d\n", reg, restLabel);
	releaseRegister(reg);
	codeGen(stmt);
	fprintf(target_file,"JMP L%d\n",loopLabel);
	fprintf(target_file,"L%d:\n",restLabel);
	popStack();
}

int countLocals() {
    int count = 0;
    struct Lsymbol* temp = LSThead;
    while (temp != NULL) {
        if (temp->binding > 0)  // BP+1, BP+2, ... => locals
            count++;
        temp = temp->next;
    }
    return count;
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
		case Nmod :
		{
			int r1 = codeGen(root->left);
			int r2 = codeGen(root->right);
			int r3 = getFreeRegister();
			fprintf(target_file, "MOV R%d, R%d\n", r3, r1); 
			fprintf(target_file, "DIV R%d, R%d\n", r1, r2);
			fprintf(target_file, "MUL R%d, R%d\n", r1, r2);
			fprintf(target_file, "SUB R%d, R%d\n", r3, r1);
			releaseRegister(r1);
			releaseRegister(r2);
			return r3;
		}
		case Nassign : return genAssignInstr(root);
		case Nconnect :
		{
			codeGen(root->left);
			codeGen(root->right);
			return -1;
		}
				case Nvar :
		{
			int addrReg = genAddressOfVar(root);
            int dataReg = getFreeRegister();
            fprintf(target_file, "MOV R%d, [R%d]\n", dataReg, addrReg);
            releaseRegister(addrReg);
            return dataReg;
		}
		case Nconst : return genConstInstr(root->val);
		case Nread :
		{
			int addrReg;
			if (root->left->nodetype == Narraccess)
        		addrReg = genArrayAddress(root->left);
			else
				addrReg = genAddressOfVar(root->left);
			genReadInstr(addrReg);
			releaseRegister(addrReg);
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
		case Nbreak :
		{
			genBreakCode();
			return -1;
		}
		case Ncontinue :
		{
			genContinueCode();
			return -1;
		}
		case Nrepeat :
		{
			genRepeatCode(root);
			return -1;
		}
		case Ndowhile :
		{
			genDoWhileCode(root);
			return -1;
		}
		case Nstr :
		{
			int reg = getFreeRegister();
            fprintf(target_file, "MOV R%d, %s\n", reg, root->strVal);
            return reg;
		}
		case Narraccess :
		{
			int addrReg = genArrayAddress(root);
			int dataReg = getFreeRegister();
			fprintf(target_file,"MOV R%d, [R%d]\n",dataReg,addrReg);
			releaseRegister(addrReg);
			return dataReg;
		}
		case Naddr :
		{
			int r = getFreeRegister();
			fprintf(target_file,"MOV R%d, %d\n",r,root->left->symbolTableEntry->binding);
			return r;
		}
		case Nderef :
		{
			int addr = codeGen(root->left);
			int r = getFreeRegister();
			fprintf(target_file,"MOV R%d, [R%d]\n",r,addr);
			releaseRegister(addr);
			return r;
		}
		case Nfdef :
		{
			Gsymbol* g = root->symbolTableEntry;
			int fnLabel = g->flabel;

			fprintf(target_file, "F%d:\n", fnLabel);

			// Prologue: save caller BP, set new BP
			fprintf(target_file, "PUSH BP\n");
			fprintf(target_file, "MOV BP, SP\n");

			// Allocate space for locals: BP+1, BP+2, ...
			int localCount = root->val;
			currentFnLocalCount = localCount;
			for (int i = 0; i < localCount; i++) {
				fprintf(target_file, "PUSH R0\n");
			}

			// Generate local declarations (if any) – usually no code, but keeps structure consistent
			if (root->ldeclblock)
				codeGen(root->ldeclblock);
				
			fnHasReturned = 0;
			// Generate body; Nreturn only stores return value
			if (root->body)
				codeGen(root->body);


			// If control reaches here with no explicit return,
			// do default: no return value, just clean up and RET.
			if (!fnHasReturned)
			{
				for (int i = 0; i < localCount; i++)
					fprintf(target_file, "POP R0\n");
				fprintf(target_file, "POP BP\n");
				fprintf(target_file, "RET\n");
			}
			fnHasReturned = 1;
			return -1;
		}

		case Nreturn:
		{
			int r = codeGen(root->left);
			int addr = getFreeRegister();
			fprintf(target_file, "MOV R%d, BP\n", addr);
			fprintf(target_file, "ADD R%d, -2\n", addr);
			fprintf(target_file, "MOV [R%d], R%d\n", addr, r);
			releaseRegister(addr);
			releaseRegister(r);

			// Must clean up locals and return immediately
			for (int i = 0; i < currentFnLocalCount; i++)
				fprintf(target_file, "POP R0\n");
			fprintf(target_file, "POP BP\n");
			fprintf(target_file, "RET\n");
			return -1;
		}
		case Nfcall:
		{
			Gsymbol* g = root->symbolTableEntry;
			tnode* ap = root->right;

			tnode* args[64];
			int ac = 0;
			tnode* cur = ap;
			while (cur != NULL) {
				if (cur->nodetype == Nconnect) {
					args[ac++] = cur->left;   // ← was cur->right
					cur = cur->right;         // ← was cur->left
				} else {
					args[ac++] = cur;
					break;
				}
			}

			for (int i = 0; i < ac; i++) {   // ← was ac-1 down to 0
				int r = codeGen(args[i]);
				fprintf(target_file, "PUSH R%d\n", r);
				releaseRegister(r);
			}

			// 2. Push empty slot for return value
			int retSlot = getFreeRegister();
			fprintf(target_file, "PUSH R%d\n", retSlot);  // push empty slot
			releaseRegister(retSlot);

			// 3. Call function
			fprintf(target_file, "CALL F%d\n", g->flabel);

			// 4. Pop return value into fresh register
			int retReg = getFreeRegister();
			fprintf(target_file, "POP R%d\n", retReg);   // pop return value

			// Pop arguments (discard)
			int tmp = getFreeRegister();
			for (int i = 0; i < ac; i++) {
				fprintf(target_file, "POP R%d\n", tmp);
			}
			releaseRegister(tmp);

			return retReg;   // let Nassign handle the store
		}
	}
}

void generate(tnode* root)
{
    target_file = fopen("intermediate.xsm","w");
    initializeRegisters();
    fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(target_file, "BRKP\n");
    fprintf(target_file, "MOV SP, %d\n", stackVal-1);
    fprintf(target_file, "JMP MAIN\n");

    // Emit function definitions BEFORE MAIN label
    if (root->right && root->right->left)
        codeGen(root->right->left);   // FDefBlock

    fprintf(target_file, "MAIN:\n");
    tnode* mainBlock = root->right->right;
    if (mainBlock && mainBlock->right)
        codeGen(mainBlock->right);
    else if (mainBlock)
        codeGen(mainBlock);

    generateExit();
}

void genBreakCode()
{
	LStack *temp=peekStack();
    int rest=temp->rest;
    fprintf(target_file,"JMP L%d\n",rest);
}

void genContinueCode()
{
    LStack *temp=peekStack();
    int loop=temp->condLabel;
    fprintf(target_file,"JMP L%d\n",loop);
}

tnode* makeBreakNode()
{
	tnode* temp = (tnode*)malloc(sizeof(tnode));
	temp->val = INT_MAX;
	temp->type = -1;
	temp->varname = NULL;
	temp->nodetype = Nbreak;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

tnode* makeContinueNode()
{
	tnode* temp = (tnode*)malloc(sizeof(tnode));
	temp->val = INT_MAX;
	temp->type = -1;
	temp->varname = NULL;
	temp->nodetype = Ncontinue;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

tnode* makeDoWhileNode(tnode* stmt, tnode* con)
{
	if (con->type!=1)
	{
		printf("Condition not BOOL\n");
		exit(1);
	}
	tnode* temp = (tnode*)malloc(sizeof(tnode));
	temp->val = INT_MAX;
	temp->type = -1;
	temp->varname = NULL;
	temp->nodetype = Ndowhile;
	temp->left = stmt;
	temp->right = con;
	return temp;
}

tnode* makeRepeatNode(tnode* stmt, tnode* con)
{
	if (con->type!=1)
	{
		printf("Condition not BOOL\n");
		exit(1);
	}
	tnode* temp = (tnode*)malloc(sizeof(tnode));
	temp->val = INT_MAX;
	temp->type = -1;
	temp->varname = NULL;
	temp->nodetype = Nrepeat;
	temp->left = stmt;
	temp->right = con;
	return temp;
}

void genRepeatCode(tnode *node)
{
    int loopLabel = getLabel();
    int restLabel = getLabel();
    pushStack(loopLabel, restLabel);
    fprintf(target_file, "L%d:\n", loopLabel);
    codeGen(node->left); 
    int x = genConditionCode(node->right, loopLabel);
    fprintf(target_file, "L%d:\n", restLabel);
    releaseRegister(x);
    popStack();
}

void genDoWhileCode(tnode *node)
{
    int loopLabel = getLabel();
    int restLabel = getLabel();
    pushStack(loopLabel, restLabel);
    fprintf(target_file, "L%d:\n", loopLabel);
    codeGen(node->left); 
    int x = genConditionCode(node->right, restLabel);
    fprintf(target_file, "JMP L%d\n", loopLabel);
    fprintf(target_file, "L%d:\n", restLabel);
    releaseRegister(x);
    popStack();
}

struct tnode* makeStringNode(char* str)
{
	tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->strVal = strdup(str);
	temp->type = 2;
	temp->varname = NULL;
	temp->nodetype = Nstr;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

struct tnode* makeDeclNode(struct tnode* typeNode, struct tnode* varlist) {
    struct tnode* temp = varlist;
    int type = typeNode->type;

    while (temp != NULL) {
        struct tnode* target = (temp->nodetype == Nconnect) ? temp->right : temp;
        if (target != NULL && target->varname != NULL) {
			if (!inLocalDecl) {
				// Global / main declarations
				if (target->nodetype == Nfdecl) {
					// function declarations are already installed in makeFnDeclNode
				} else {
					if (Lookup(target->varname) != NULL) {
						printf("Semantic Error: Global variable %s redeclared\n", target->varname);
						exit(1);
					}
					if (target->nodetype == Nvar) {
						Install(target->varname, type, 1, target->isPointer, 0, NULL);
					}
					else if (target->nodetype == Narr) {
						int count = 0;
						int totalSize = getDim(target->right, &count);
						Gsymbol* entry = Install(target->varname, type, totalSize, target->isPointer, 0, NULL);
						entry->dimension = (int*)malloc(count * sizeof(int));
						entry->numDim = 0;
						addDim(entry, target->right);
					}
				}
			} else {
				// Local declarations inside function
				if (LLookup(target->varname) != NULL) {
					printf("Semantic Error: Local variable %s redeclared\n", target->varname);
					exit(1);
				}
				LInstall(target->varname, type);
			}
		}

        if (temp->nodetype == Nconnect)
            temp = temp->left;
        else
            break;
    }
    return varlist;
}

struct tnode* makeTypeNode(int type)
{
	tnode *temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = INT_MAX;
	temp->type = type;
	temp->varname = NULL;
	temp->nodetype = Ntype;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

struct tnode* makeVariableUseNode(char* name) {
    tnode* temp = (tnode*)malloc(sizeof(tnode));
    temp->varname = strdup(name);
    temp->left = temp->right = NULL;
    temp->nodetype = Nvar;

    // Do NOT error here; just leave entries NULL.
    // genAddressOfVar() will resolve local/global bindings later.
    temp->localSymbolTableEntry = LLookup(name);
    temp->symbolTableEntry      = Lookup(name);

    if (temp->localSymbolTableEntry != NULL)
	{
        temp->type = temp->localSymbolTableEntry->type;
		temp->localBinding = temp->localSymbolTableEntry->binding;
	}
    else if (temp->symbolTableEntry != NULL)
        temp->type = temp->symbolTableEntry->type;
    else
        temp->type = 0;  // default INT; real type checks still come from decls

    temp->isPointer = 0;
    temp->isFunction = 0;
    temp->paramlist = NULL;
    temp->body = NULL;
    temp->ldeclblock = NULL;

    return temp;
}

struct tnode* makeArrayNode(tnode* varList, struct tnode* id, tnode* size)
{
	struct tnode* temp = (tnode*)malloc(sizeof(tnode));
	temp->varname = strdup(id->varname);
	temp->left = id;
	temp->right = size;
	temp->nodetype = Narr;
	temp->val = 0;
	temp->symbolTableEntry = NULL;
	if (varList == NULL) return temp;
	return makeConnectNode(varList,temp);
}

struct tnode* makeArrayAccessNode(tnode* name, tnode* index)
{
    struct Gsymbol* symbol = Lookup(name->varname);
    if (symbol == NULL)
    {
        printf("Error: Variable %s undeclared\n", name->varname);
        exit(1);
    }
    struct tnode* temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = strdup(name->varname);
    temp->nodetype = Narraccess;
    temp->symbolTableEntry = symbol;
    temp->type = symbol->type;
    temp->left = index;
    temp->right = NULL;
    temp->val = INT_MAX;
    temp->isPointer = 0;

    return temp;
}

int genArrayAddress(tnode* t)
{
    Gsymbol* entry = t->symbolTableEntry;
    int base = entry->binding;

    int addrReg = getFreeRegister();

    if (entry->numDim == 1)
    {
        int indexReg = codeGen(t->left);
        fprintf(target_file, "MOV R%d, %d\n", addrReg, base);
        fprintf(target_file, "ADD R%d, R%d\n", addrReg, indexReg);
        releaseRegister(indexReg);
        return addrReg;
    }

    if (entry->numDim == 2)
    {
        tnode* row = t->left->left;
        tnode* col = t->left->right;

        int rowReg = codeGen(row);
        int colReg = codeGen(col);

        int cols = entry->dimension[1];

        fprintf(target_file, "MUL R%d, %d\n", rowReg, cols);
        fprintf(target_file, "ADD R%d, R%d\n", rowReg, colReg);

        fprintf(target_file, "MOV R%d, %d\n", addrReg, base);
        fprintf(target_file, "ADD R%d, R%d\n", addrReg, rowReg);

        releaseRegister(rowReg);
        releaseRegister(colReg);
        return addrReg;
    }

    printf("Unsupported array dimension\n");
    exit(1);
}

tnode* makeAddrNode(tnode* varNode) {
    if(varNode->nodetype != Nvar) {
        printf("Error: & operator must be applied to a variable\n");
        exit(1);
    }
    tnode* node = (tnode*)malloc(sizeof(tnode));
    node->nodetype = Naddr;
    node->type = varNode->type;
    node->left = varNode;
    node->isPointer = 1;
    return node;
}

tnode* makeDerefNode(tnode* expr) {
    if(expr->isPointer != 1) {
        printf("Error: * operator applied to non-pointer\n");
        exit(1);
    }
    tnode* node = (tnode*)malloc(sizeof(tnode));
    node->nodetype = Nderef;
    node->type = expr->type;
    node->left = expr;
    node->isPointer = 0;
    return node;
}

tnode* makeFnDeclNode(tnode* id, tnode* paramlist)
{
	tnode* node = makeConnectNode(id,paramlist);
    node->nodetype = Nfdecl;
	node->varname = id->varname;
	node->paramlist = buildParamListFromTree(paramlist);
	node->isFunction = 1;
	Install(id->varname, current_type, 0, 0, 1, node->paramlist); //installs fn into GST
    return node;
}

struct tnode* makeFnDefNode(tnode* type, tnode* id, tnode* paramlist, tnode* ldeclblock, tnode* body) {
    Gsymbol* gEntry = Lookup(id->varname);
    if (gEntry == NULL) { //if not declared, error
        printf("Semantic Error: Function %s not declared\n", id->varname);
        exit(1);
    }
    Param* formalParams = buildParamListFromTree(paramlist); //rebuilds parameter list from def's AST, verifies it matches declaration
    checkSignature(gEntry, type->type, formalParams);
	extern int inParamList;
	inParamList = 0; //local vars positive binding
    tnode* node = (tnode*)malloc(sizeof(tnode));
    node->nodetype = Nfdef;
    node->type = type->type;
    node->varname = strdup(id->varname);
    node->left = paramlist;     // parameters AST
    node->right = NULL;
    node->symbolTableEntry = gEntry;
    node->localSymbolTableEntry = NULL;
    node->isFunction = 1;
    node->paramlist = formalParams;
    node->body = body;          // function body AST
    node->ldeclblock = ldeclblock; // local decls AST
	node->val = countLocals(); //counts how many local vars in LST, used to allocate/deallocate stack space
	ClearLST();
    return node;
}

struct tnode* makeParamNode(tnode* type, tnode* id) {
	extern int inParamList;
    inParamList = 1; //negative bindings for parameters
    tnode* node = (tnode*)malloc(sizeof(tnode));
    node->nodetype = Nparam;
    node->type = type->type;
    node->varname = strdup(id->varname);
    node->left = NULL;
    node->right = NULL;
    LInstall(node->varname, node->type); //install into LST with BP-relative negative binding
    return node;
}

struct tnode* makeFnCallNode(tnode* id, tnode* arglist) {
    struct Gsymbol* entry = Lookup(id->varname);
    if (entry == NULL || !entry->isFunction) {
        printf("Semantic Error: %s is not a declared function\n", id->varname);
        exit(1);
    }

    // Check argument types and count against formal parameters
    Param* fp = entry->paramlist;
    tnode* ap = arglist;
    tnode* cur = ap;
    while (fp != NULL && cur != NULL) { //walks each pair of formal and actual arg list simultaneously, check types match
        tnode* argNode = (cur->nodetype == Nconnect) ? cur->right : cur;
        int atype = argNode->type;
        if (argNode->symbolTableEntry)
            atype = argNode->symbolTableEntry->type;
        if (atype != fp->type) {
            printf("Semantic Error: Argument type mismatch in call to %s\n", entry->name);
            exit(1);
        }
        fp = fp->next;
        if (cur->nodetype == Nconnect)
            cur = cur->left;
        else
            cur = NULL;
    }
    if (fp != NULL || cur != NULL) {
        printf("Semantic Error: Argument count mismatch in call to %s\n", entry->name);
        exit(1);
    }

    tnode* node = (tnode*)malloc(sizeof(tnode));
    node->nodetype = Nfcall;
    node->left = id;
    node->right = arglist;
    node->symbolTableEntry = entry;
    node->localSymbolTableEntry = NULL;
    node->type = entry->type;
    node->isFunction = 0;
    node->paramlist = NULL;
    node->body = NULL;
    node->ldeclblock = NULL;
    return node;
}

void checkSignature(Gsymbol* gEntry, int type, Param* formalParams) { //checks return type in def matches declaration
    if (gEntry->type != type) {
        printf("Semantic Error: Return type mismatch for function %s\n", gEntry->name);
        exit(1);
    }
    Param *p1 = gEntry->paramlist;
    Param *p2 = formalParams;
    while (p1 != NULL && p2 != NULL) {
        if (p1->type != p2->type || strcmp(p1->name, p2->name) != 0) {
            printf("Semantic Error: Parameter mismatch in definition of %s\n", gEntry->name);
            exit(1);
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    if (p1 != NULL || p2 != NULL) {
        printf("Semantic Error: Parameter count mismatch for function %s\n", gEntry->name);
        exit(1);
    }
}

struct tnode* makeReturnNode(tnode* expr) {
    tnode* node = (tnode*)malloc(sizeof(tnode));
    node->nodetype = Nreturn;
    node->type = expr ? expr->type : 0; // assuming int return val
    node->left = expr;
    node->right = NULL;
    node->varname = NULL;
    node->symbolTableEntry = NULL;
    node->localSymbolTableEntry = NULL;
    node->isPointer = 0;
    node->isFunction = 0;
    node->paramlist = NULL;
    node->body = NULL;
    node->ldeclblock = NULL;
    return node;
}