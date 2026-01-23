typedef struct tnode{
        int val;
	int type;
	char *varname;
	int nodetype;
	struct tnode *left,*right;
} tnode;

enum nodeTypes {
	Nadd, Nsub, Nmul, Ndiv, Nassign, Nconnect, Nvar, Nconst, Nread, Nwrite
};

struct tnode* makeLeafNode(int n);

int evaluate(struct tnode *t);

int codeGen(struct tnode *t);

void printPrefix(struct tnode *t);

void printPostfix(struct tnode *t);

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);

struct tnode* makeConnectNode(tnode *l,tnode *r);

struct tnode* makeVariableNode(char *c);

struct tnode* makeConstantNode(int n);

struct tnode* makeAssignNode(tnode *l,tnode* r);

struct tnode* makeReadNode(tnode* t);

struct tnode* makeWriteNode(tnode* t);

void print(tnode* root);

struct tnode* createTree(int val, int type, char* c, struct tnode *l, struct tnode *r);
