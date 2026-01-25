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

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
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
    temp->type = -1;
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
        temp->type = -1;
        temp->varname = NULL;
        temp->nodetype = Nconst;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
}

struct tnode* makeAssignNode(tnode *l,tnode* r)
{
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
	}
}

void print(tnode* root)
{
	if (!root) return;
	printNodes(root);
	print(root->left);
	print(root->right);
}

struct tnode* createTree(int val, int type, char* c, struct tnode *l, struct tnode *r)
{
	struct tnode* temp;
	if (val!=INT_MAX) return makeConstantNode(val);
	else if (c!=NULL) return makeVariableNode(c);
	else
	{
		temp = (tnode*)malloc(sizeof(tnode));
		temp->val = INT_MAX;
		temp->nodetype = type;
		temp->varname = NULL;
		temp->left = l;
		temp->right = r;		
	}
	return temp;
}


