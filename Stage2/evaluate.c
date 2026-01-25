#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "codegen.h"

int variables[26];

int getVariableIndex(tnode* root)
{
	return (int)(root->varname[0]-'a');
}

void evaluateAndPrint(tnode* root)
{
	for (int i=0;i<26;i++) variables[i]=0;
	evaluate(root);
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
	}

}
