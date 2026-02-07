#include "symbolTable.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../control.h"
#include "../label/label.h"

struct Gsymbol* SThead = NULL;
struct Gsymbol* STtail = NULL;
int stackVal = 4096;
int dtype = -1;

struct Gsymbol *Lookup(char * name)
{
    Gsymbol* node = SThead;
    while (node)
    {
        if (strcmp(node->name,name)==0)
            return node;
        node = node->next;
    }
    return NULL;
}

Gsymbol* Install(char *name, int type, int size, int isPointer, int isFunction, Param* paramlist)
{
    if (Lookup(name)!=NULL)
    {
        printf("Multiple declaration of identifier!\n");
        exit(1);
    }
    Gsymbol* node = (Gsymbol*)malloc(sizeof(Gsymbol));
    node->name = strdup(name);
    node->type = type;
    node->size = size;
    node->binding = stackVal;
    node->next = NULL;
    node->isPointer = isPointer;
    node->isFunction = isFunction;
    node->paramlist = paramlist;
    
    if (isFunction)
    {
        node->binding = -1;
        node->flabel = getFnLabel();
    }
    else
    {
        node->binding = stackVal;
        stackVal += size;
        node->flabel = -1;
    }

    if (!SThead)
    {
        SThead = node;
        STtail = node;
        return node;
    }
    STtail->next = node;
    STtail = node;
    return node;
}

void printParamList(Gsymbol* entry)
{
    Param* param = entry->paramlist;
    if (param == NULL)
    {
        printf("\t\t(no parameters)\n");
        return;
    }
    char typeName[10];
    printf("\t\t%-15s %-10s\n", "Name", "Type");
    while (param)
    {
        if (param->type==0) strcpy(typeName,"INT");
        else if (param->type==1) strcpy(typeName,"BOOL");
        else if (param->type==2) strcpy(typeName,"STR");
        else strcpy(typeName,"NULL");
        printf("\t\t%-15s %-10s\n",param->name,typeName);
        param = param->next;
    }
}

void printSymbolTable()
{
    Gsymbol* temp = SThead;
    printf("%-15s %-10s %-10s %-10s %-10s\n", "Name", "Type", "Size", "Binding", "Flabel");
    while (temp)
    {
        char typeName[10];
        if (temp->type==0) strcpy(typeName,"INT");
        else if (temp->type==1) strcpy(typeName,"BOOL");
        else if (temp->type==2) strcpy(typeName,"STR");
        else strcpy(typeName,"NULL");
        if (temp->isFunction)
        {
            printf("%-15s %-10s %-15d %-10d %-15d\n",temp->name, typeName, temp->size, temp->binding,temp->flabel);
            printParamList(temp);
        }
        else
            printf("%-15s %-10s %-15d %-10d\n",temp->name, typeName, temp->size, temp->binding);
        temp = temp->next;
    }
}

void parseDecl(tnode* root)
{
    if (!root) return;
    switch(root->nodetype)
    {
        case Nconnect:
        {
            parseDecl(root->left);
            parseDecl(root->right);
            break;
        }
        case Ndecl:
        {
            parseDecl(root->left);
            parseDecl(root->right);
            break;
        }
        case Ntype:
        {
            dtype = root->type;
            break;
        }
        case Nvar:
        {
            Gsymbol* entry = Install(root->varname,dtype,1,root->isPointer,0,NULL);
            root->symbolTableEntry = entry;
            root->type = dtype;
            break;
        }
        case Narr:
        {
            int count = 0;
            int totalSize = getDim(root->right,&count);
            Gsymbol* entry = Install(root->left->varname,dtype,totalSize,root->isPointer,0,NULL);
            entry->dimension = (int*)malloc(count*sizeof(int));
            entry->numDim = 0;
            addDim(entry,root->right);
            root->symbolTableEntry = entry;
            root->type = dtype;
            break;
        }
        case Nfdecl :
        {
            Gsymbol* entry = Install(root->varname,dtype,0,0,1,root->paramlist);
            root->symbolTableEntry = entry;
            root->type = dtype;
            break;
        }
    }
}

int getDim(tnode* root, int* count)
{
    if (!root) return 1;
    if (root->nodetype == Nconst)
    {
        (*count)++; //count dim
        return root->val; //size of dim
    }
    return getDim(root->left,count)*getDim(root->right,count);
}


void addDim(Gsymbol* symbol, tnode* root)
{
    if (!root) return;
    if (root->nodetype == Nconst)
    {
        symbol->dimension[symbol->numDim++] = root->val;
        return;
    }
    addDim(symbol,root->left);
    addDim(symbol,root->right);
}