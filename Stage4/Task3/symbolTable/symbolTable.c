#include "symbolTable.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../control.h"

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

Gsymbol* Install(char *name, int type, int size)
{
    if (Lookup(name)!=NULL)
    {
        printf("Variable cannot be redeclared!\n");
        exit(1);
    }
    Gsymbol* node = (Gsymbol*)malloc(sizeof(Gsymbol));
    node->name = strdup(name);
    node->type = type;
    node->size = size;
    node->binding = stackVal;
    node->next = NULL;
    stackVal += size;
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

void printSymbolTable()
{
    Gsymbol* temp = SThead;
    printf("%-15s %-10s %-10s %-10s\n", "Name", "Type", "Size", "Binding");
    while (temp)
    {
        char typeName[10];
        if (temp->type==0) strcpy(typeName,"INT");
        else if (temp->type==1) strcpy(typeName,"BOOL");
        else if (temp->type==2) strcpy(typeName,"STR");
        else strcpy(typeName,"NULL");
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
            Gsymbol* entry = Install(root->varname,dtype,1);
            root->symbolTableEntry = entry;
            root->type = dtype;
            break;
        }
        case Narr:
        {
            Gsymbol* entry = NULL;
            if (root->left && root->right)
                entry = Install(root->left->varname,dtype,root->right->val);
            else if (root->left)
                entry = Install(root->left->varname,dtype,0);
            root->symbolTableEntry = entry;
            root->type = dtype;
            break;
        }
    }
}