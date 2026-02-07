#ifndef CONTROL_H
#define CONTROL_H

struct Gsymbol;
typedef struct Gsymbol Gsymbol;

typedef struct tnode
{
	union
	{
		int val;
		char* strVal;
	} 	;
	int type;
	char *varname;
	int nodetype;
	Gsymbol* symbolTableEntry;
	int isPointer;
	int isFunction;
	struct Param* paramlist;
	struct tnode *left,*right;
} tnode;

enum nodeTypes {
	Nadd, Nsub, Nmul, Ndiv, Nassign, Nconnect, Nvar, Nconst, Nread, Nwrite, Nif, Nifelse, Ngt, Nlt, Nge, Nle, Nne, Neq, Nwhile, Nbreak, Ncontinue, Nrepeat, Ndowhile, Ndecl, Ntype, Nstr, Narr, Narraccess, Naddr, Nderef, Nmod, Nfdecl, Nfdef, Nparam, Nfcall
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

tnode*makeContinueNode();

tnode* makeDoWhileNode(tnode* stmt, tnode* con);

tnode* makeRepeatNode(tnode* stmt, tnode* con);

void genRepeatCode(tnode *node);

void genDoWhileCode(tnode *node);

struct tnode* makeDeclNode(tnode* type, tnode* vars);

struct tnode* makeStringNode(char* str);

struct tnode* makeTypeNode(int type);

struct tnode* makeVariableUseNode(char* name);

struct tnode* makeArrayNode(tnode* varList, struct tnode* id, tnode* size);

struct tnode* makeArrayAccessNode(tnode* name, tnode* index);

int genArrayAddress(tnode* t);

tnode* makeAddrNode(tnode* varNode);

tnode* makeDerefNode(tnode* expr);

tnode* makeFnDeclNode(tnode* id, tnode* paramlist);

tnode* makeFnDefNode(tnode* type, tnode* id, tnode* paramlist, tnode* ldeclblock, tnode* body);

tnode* makeParamNode(tnode* type, tnode* id);

tnode* makeFnCallNode(tnode* id, tnode* arglist);

#endif