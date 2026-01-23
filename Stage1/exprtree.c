FILE* target_file;

struct tnode* makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
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

int evaluate(struct tnode *t){
    if(t->op == NULL)
    {
        return t->val;
    }
    else{
        switch(*(t->op)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }
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

int codeGen(struct tnode* t)
{
	if (t->left==NULL && t->right==NULL)
	{
		int r = getReg();
		fprintf(target_file, "MOV R%d, %d\n",r,t->val);
		return r;
	}
	int r1 = codeGen(t->left);
	int r2 = codeGen(t->right);
	switch(*(t->op))
	{
		case '+' : fprintf(target_file, "ADD R%d, R%d\n", r1, r2); break;
		case '-' : fprintf(target_file, "SUB R%d, R%d\n", r1, r2); break;
		case '*' : fprintf(target_file, "MUL R%d, R%d\n", r1, r2); break;
		case '/' : fprintf(target_file, "DIV R%d, R%d\n", r1, r2); break;
	}
	freeReg();
	return r1;
}
