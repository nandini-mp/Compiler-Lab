#ifndef TYPETABLE_H
#define TYPETABLE_H

// Forward declaration
struct Ttable;

// A single field in a user-defined type
// e.g. for "bst { int a; bst left; bst right; }"
// there are 3 Tfield entries: a, left, right
typedef struct Tfield {
    char* name;           // field name e.g. "left"
    struct Ttable* type;  // pointer to type table entry of this field's type
    int fieldIndex;       // position: 0, 1, 2... (used for memory offset calculation)
    struct Tfield* next;
} Tfield;

// One entry in the type table
typedef struct Ttable {
    char* name;           // type name e.g. "bst", "int", "str"
    int size;             // number of words this type occupies in memory
    Tfield* fields;       // linked list of member fields (NULL for int/str)
    struct Ttable* next;
} Ttable;

// Initialize type table with default types: int, str, bool, void, null
void initTypeTable();

// Look up a type by name, returns NULL if not found
Ttable* TLookup(char* name);

// Install a new user-defined type
// name: type name, fields: linked list of its fields
Ttable* TInstall(char* name, Tfield* fields);

// Create a new Tfield entry
Tfield* createField(char* name, Ttable* type);

// Look up a field by name within a type
Tfield* FLookup(Ttable* type, char* fieldname);

// Print type table (for debugging)
void printTypeTable();

Ttable* TInstallEmpty(char* name);

void TSetFields(char* name, Tfield* fields);

#endif