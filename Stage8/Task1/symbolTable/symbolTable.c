#include "symbolTable.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../control.h"
#include "../label/label.h"
#include "../typeTable/typeTable.h"
#include "../classTable/classTable.h"

struct Gsymbol* SThead = NULL;
struct Gsymbol* STtail = NULL;
int stackVal = 4096;
Ttable* dtype = NULL;

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

Gsymbol* Install(char *name, Ttable* type, int size, int isPointer, int isFunction, Param* paramlist)
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
    node->dimension = NULL;   // init
    node->numDim = 0;         // init
    node->ctype = NULL;

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
        printf("\t\t%-15s %-10s\n",
        param->name,
        param->type ? param->type->name : "NULL");
        param = param->next;
    }
}

Param* buildParamListFromTree(tnode* root)
{
    if (!root) return NULL;
    if (root->nodetype == Nparam)
    {
        Param* p = (Param*)malloc(sizeof(Param));
        p->name = strdup(root->varname);
        p->type = root->typeEntry;
        p->next = NULL;
        return p;
    }
    if (root->nodetype == Nconnect)
    {
        Param* left = buildParamListFromTree(root->left);
        Param* right = buildParamListFromTree(root->right);
        if (!left) return right;
        Param* temp = left;
        while (temp->next) temp = temp->next;
        temp->next = right;
        return left;
    }
    return NULL;
}

void printSymbolTable()
{
    Gsymbol* temp = SThead;
    printf("%-15s %-10s %-10s %-10s %-10s\n", "Name", "Type", "Size", "Binding", "Flabel");
    while (temp)
    {
        if (temp->isFunction)
        {
            printf("%-15s %-10s %-15d %-10d %-15d\n",temp->name,temp->type ? temp->type->name : "NULL",temp->size, temp->binding, temp->flabel);
            printParamList(temp);
        }
        else
            printf("%-15s %-10s %-15d %-10d\n",temp->name,temp->type ? temp->type->name : "NULL",temp->size,temp->binding);
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
            dtype = root->typeEntry;
            break;
        }
        case Nvar:
        {
            Gsymbol* entry = Install(root->varname,dtype,1,root->isPointer,0,NULL);
            root->symbolTableEntry = entry;
            root->typeEntry = dtype;
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
            root->typeEntry = dtype;
            break;
        }
        case Nfdecl :
        {
            Gsymbol* entry = Install(root->varname,dtype,0,0,1,root->paramlist);
            root->symbolTableEntry = entry;
            root->typeEntry = dtype;
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

////////////////////////////////////////////////////////////

struct Lsymbol* LSThead = NULL;
struct Lsymbol* LSTtail = NULL;
int localBinding = 1; //locals: BP+1, BP+2 etc
int paramBinding = -3; //args: BP-3, BP-4 etc
int inParamList = 0; //1 for formal, 0 for locals

struct Lsymbol* LLookup(char* name) {
    struct Lsymbol* temp = LSThead;
    while (temp) {
        if (strcmp(temp->name, name) == 0)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void LInstall(char* name, Ttable* type) {
    if (LLookup(name) != NULL) {
        printf("Semantic Error: Local variable %s redeclared\n", name);
        exit(1);
    }
    struct Lsymbol* temp = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
    temp->name = strdup(name);
    temp->type = type;

    if (inParamList) {
        temp->binding = paramBinding--; // BP-3, BP-4 etc
    } else {
        temp->binding = localBinding++; // BP+1, BP+2 etc
    }

    temp->next = NULL;
    printf("Installing %s | type=%s | binding=%d | inParamList=%d\n", name, type ? type->name : "NULL", temp->binding, inParamList);

    if (LSThead == NULL) {
        LSThead = temp;
        LSTtail = temp;
    } else {
        LSTtail->next = temp;
        LSTtail = temp;
    }
}

void ClearLST() {
    struct Lsymbol* curr = LSThead;
    struct Lsymbol* next;
    while (curr != NULL) {
        next = curr->next;
        free(curr->name);
        free(curr);
        curr = next;
    }
    LSThead = NULL;
    LSTtail = NULL;
    localBinding = 1; // Reset binding for next function
    paramBinding = -3; // arg1 at BP-3
    inParamList = 0;
}

struct tnode* lookupVar(char *name) {
    // First, try local symbol table
    Lsymbol *l = LLookup(name);
    if (l != NULL) {
        tnode *t = (tnode*)malloc(sizeof(tnode));
        t->varname = strdup(name);
        t->nodetype = Nvar;
        t->localSymbolTableEntry = l;
        t->symbolTableEntry = NULL;
        t->typeEntry = l->type;
        t->type = 0;
        t->left = NULL;
        t->right = NULL;
        t->isPointer = 0;
        t->isFunction = 0;
        t->paramlist = NULL;
        t->body = NULL;
        t->ldeclblock = NULL;
        return t;
    }

    // Then, try global symbol table
    Gsymbol *g = Lookup(name);
    if (g != NULL) {
        tnode *t = (tnode*)malloc(sizeof(tnode));
        t->varname = strdup(name);
        t->nodetype = Nvar;
        t->symbolTableEntry = g;
        t->localSymbolTableEntry = NULL;
        t->typeEntry = g->type;
        t->type = 0;
        t->left = NULL;
        t->right = NULL;
        t->isPointer = g->isPointer;
        t->isFunction = g->isFunction;
        t->paramlist = NULL;
        t->body = NULL;
        t->ldeclblock = NULL;
        return t;
    }

    return NULL;
}

Gsymbol* InstallClass(char* name, Ctable* ctype, int size)
{
    if (Lookup(name) != NULL) {
        printf("Multiple declaration of identifier: %s\n", name);
        exit(1);
    }
    Gsymbol* node = (Gsymbol*)malloc(sizeof(Gsymbol));
    node->name       = strdup(name);
    node->type       = NULL;
    node->ctype      = ctype;
    node->size       = 2;          // always 2 words for a class variable
    node->binding    = stackVal;
    node->flabel     = -1;
    node->next       = NULL;
    node->isPointer  = 0;
    node->isFunction = 0;
    node->paramlist  = NULL;
    node->dimension  = NULL;
    node->numDim     = 0;

    stackVal += 2;                 // word 0 = member field ptr, word 1 = VFT ptr

    if (!SThead) { SThead = node; STtail = node; return node; }
    STtail->next = node;
    STtail = node;
    return node;
}