#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

struct tnode;
typedef struct tnode tnode;
typedef struct Gsymbol {
    char* name;       // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct Gsymbol *next;
    int *dimension;
    int numDim;
    int isPointer;
} Gsymbol;

struct Gsymbol *Lookup(char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
Gsymbol* Install(char *name, int type, int size, int isPointer);   // Creates a symbol table entry
void printSymbolTable();
void parseDecl(tnode* root);
int getDim(tnode* root, int* count);
void addDim(Gsymbol* symbol, tnode* root);

#endif