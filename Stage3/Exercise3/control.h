#ifndef CONTROL_H
#define CONTROL_H

typedef struct tnode
{
	int val;
	int type;
	char *varname;
	int nodetype;
	struct tnode *left,*right;
} tnode;

enum nodeTypes {
	Nadd, Nsub, Nmul, Ndiv, Nassign, Nconnect, Nvar, Nconst, Nread, Nwrite, Nif, Nifelse, Ngt, Nlt, Nge, Nle, Nne, Neq, Nwhile, Nbreak, Ncontinue, Ndowhile, Nrepeat
};

int getVariableIndex(tnode* root);

int evaluate(tnode* root);

void evaluateAndPrint(tnode* root);

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);

struct tnode* makeCOperatorNode(char c,struct tnode *l, struct tnode *r);

struct tnode* makeConnectNode(tnode *l,tnode *r);

struct tnode* makeVariableNode(char *c);

struct tnode* makeConstantNode(int n);

struct tnode* makeAssignNode(tnode *l,tnode* r);

struct tnode* makeReadNode(tnode* t);

struct tnode* makeWriteNode(tnode* t);

void print(tnode* root);

struct tnode* createTree(int val, int type, char* varname, int nodetype, struct tnode *l, struct tnode *r);

struct tnode* makeIfElseNode(tnode* con, tnode* left, tnode* right);

struct tnode* makeIfNode(tnode* con, tnode* stmt);

struct tnode* makeWhileNode(tnode* con, tnode* stmt);

void generateExit();

void store(int x,int reg);

int genAddInstr(int l,int r);

int genSubInstr(int l,int r);

int genMulInstr(int l,int r);

int genDivInstr(int l,int r);

void genWriteToMem(int r,int mem);

void genReadInstr(int mem);

void genWriteInstr(int mem);

int genConstInstr(int val);

int genAddressOfVar(tnode* t);

int genAssignInstr(tnode *t);

int genLoadVarInstr(tnode* root);

int genConditionCode(tnode* root, int falseLabel);

void genIfElseCode(tnode* root);

void genIfCode(tnode* root);

void genWhileCode(tnode* root);

int codeGen(tnode* root);

void generate(tnode* root);

void genBreakCode();

void genContinueCode();

tnode* makeBreakNode();

tnode* makeContinueNode();

tnode* makeDoWhileNode(tnode* stmt, tnode* con);

tnode* makeRepeatNode(tnode* stmt, tnode* con);

void genRepeatCode(tnode *node);

void genDoWhileCode(tnode *node);

#endif