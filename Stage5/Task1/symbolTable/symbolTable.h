#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

struct tnode;
typedef struct tnode tnode;
typedef struct Gsymbol {
    char* name;       // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct Param *paramlist; //pointer to the head of the formal parameter list 
    int flabel;        //a label for identifying the starting address of a function's code
    struct Gsymbol *next; //points to the next Global Symbol Table entry
    int *dimension;
    int numDim;
    int isPointer;
    int isFunction;
} Gsymbol;


typedef struct Lsymbol {
    char* name;
    int type;
    int binding;
    struct Lsymbol* next;
} Lsymbol;


typedef struct Param {
    char* name;
    int type;
    struct Param* next;
} Param;

struct Gsymbol *Lookup(char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
Gsymbol* Install(char *name, int type, int size, int isPointer, int isFunction, Param* paramlist);   // Creates a symbol table entry
void printParamList(Gsymbol* entry);
void printSymbolTable();
void parseDecl(tnode* root);
int getDim(tnode* root, int* count);
void addDim(Gsymbol* symbol, tnode* root);

#endif