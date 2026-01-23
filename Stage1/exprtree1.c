FILE* target_file;

struct tnode* makeLeafNode(char *s)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = strdup(s);
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int regCount=-1;

int getReg()
{
	if (regCount==19)
	{
		printf("Out of registers\n");
		exit(1);
	}
	regCount++;
	return regCount;
}

int freeReg()
{
	if (regCount<0)
	{
		printf("No register to free\n");
		exit(1);
	}
	regCount--;
	return regCount;
}

void printPrefix(struct tnode *t)
{
        if (!t) return;
        if (t->op) printf("%s ",t->op);
        else printf("%s ",t->val);
        printPrefix(t->left);
        printPrefix(t->right);
}

void printPostfix(struct tnode *t)
{
        if (!t) return;
        printPostfix(t->left);
        printPostfix(t->right);
        if (t->op) printf("%s ",t->op);
        else printf("%s ",t->val);
}
