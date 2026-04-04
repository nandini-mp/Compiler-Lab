#ifndef CLASSTABLE_H
#define CLASSTABLE_H

#include "../typeTable/typeTable.h"

struct Ctable;
struct Param;

// One method in a class
typedef struct Cmethod {
    char* name;               // method name e.g. "printDetails"
    struct Ttable* returnType; // return type — pointer to type table entry
    struct Param* paramlist;  // formal parameter list (reuse Param from symbolTable)
    int methodIndex;          // position: 0, 1, 2... (used for vtable offset later)
    int flabel;               // function label for code generation e.g. F3, F4
    struct Cmethod* next;     // next method in linked list
} Cmethod;

// One entry in the class table
typedef struct Ctable {
    char* name;               // class name e.g. "Person"
    Tfield* fields;           // member fields (reuse Tfield from typeTable)
    int fieldCount;           // number of member fields (max 8)
    Cmethod* methods;         // member methods linked list
    int methodCount;          // number of methods (max 8)
    struct Ctable* parent;    // parent class — NULL for Stage 7
    struct Ctable* next;      // next class in class table linked list
} Ctable;

// Initialize class table (call once at startup)
void initClassTable();

// Look up a class by name, returns NULL if not found
Ctable* CLookup(char* name);

// Install a new empty class entry (called when class name is first seen)
Ctable* CInstall(char* name, Ctable* parent);

// Set the field list for a class (called after all fields are parsed)
void CSetFields(char* name, Tfield* fields);

// Add a method to a class
void CAddMethod(Ctable* c, Cmethod* method);

// Look up a method by name within a class, returns NULL if not found
Cmethod* CMLookup(Ctable* c, char* methodname);

// Look up a field by name within a class, returns NULL if not found
// Also sets fieldIndex on the returned Tfield
Tfield* CFLookup(Ctable* c, char* fieldname);

// Create a new Cmethod entry
Cmethod* createMethod(char* name, struct Ttable* returnType, struct Param* paramlist, int flabel);

// Print class table (for debugging)
void printClassTable();

#endif