#ifndef CONTROL_H
#define CONTROL_H

typedef struct tnode{
        int val;
	int type;
	char *varname;
	int nodetype;
	struct tnode *left,*right;
} tnode;

enum nodeTypes {
	Nadd, Nsub, Nmul, Ndiv, Nassign, Nconnect, Nvar, Nconst, Nread, Nwrite, Nif, Nifelse, Ngt, Nlt, Nge, Nle, Nne, Neq, Nwhile
};

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

#endif

