typedef struct tnode{
	char *val;
	char *op;
	struct tnode *left,*right;
} tnode;
	
struct tnode* makeLeafNode(char *s);
	
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);
	
void printPrefix(struct tnode *t);

void printPostfix(struct tnode *t);
