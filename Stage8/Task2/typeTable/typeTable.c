#include "typeTable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Head of the type table linked list
static Ttable* TThead = NULL;
static Ttable* TTtail = NULL;

void initTypeTable() {
    // Install default types with no fields and fixed sizes
    TInstall("int",  NULL);   // size 1
    TInstall("str",  NULL);   // size 1
    TInstall("bool", NULL);   // size 1
    TInstall("void", NULL);   // size 0
    TInstall("null", NULL);   // size 0

    // manually set sizes
    TLookup("int") ->size = 1;
    TLookup("str") ->size = 1;
    TLookup("bool")->size = 1;
    TLookup("void")->size = 0;
    TLookup("null")->size = 0;
}

Ttable* TLookup(char* name) {
    Ttable* temp = TThead;
    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

Ttable* TInstall(char* name, Tfield* fields) {
    if (TLookup(name) != NULL) {
        printf("Type Error: Type %s already defined\n", name);
        exit(1);
    }
    Ttable* node = (Ttable*)malloc(sizeof(Ttable));
    node->name   = strdup(name);
    node->fields = fields;
    node->next   = NULL;

    // Calculate size = number of fields
    int size = 0;
    Tfield* f = fields;
    while (f != NULL) {
        size++;
        f = f->next;
    }
    if (size > 8) {
        printf("Error: Type %s has too many member fields (max 8)\n", name);
        exit(1);
    }
    node->size = (size == 0) ? 1 : size;

    if (TThead == NULL) {
        TThead = node;
        TTtail = node;
    } else {
        TTtail->next = node;
        TTtail = node;
    }
    return node;
}

Tfield* createField(char* name, Ttable* type) {
    Tfield* f = (Tfield*)malloc(sizeof(Tfield));
    f->name  = strdup(name);
    f->type  = type;
    f->next  = NULL;
    return f;
}

Tfield* FLookup(Ttable* type, char* fieldname) {
    if (type == NULL) return NULL;
    Tfield* f = type->fields;
    int index = 0;
    while (f != NULL) {
        if (strcmp(f->name, fieldname) == 0) {
            f->fieldIndex = index;
            return f;
        }
        index++;
        f = f->next;
    }
    return NULL;
}

void printTypeTable() {
    Ttable* t = TThead;
    printf("\n--- Type Table ---\n");
    while (t != NULL) {
        printf("Type: %-10s Size: %d\n", t->name, t->size);
        Tfield* f = t->fields;
        while (f != NULL) {
            printf("    Field: %-10s Type: %s\n", f->name, f->type->name);
            f = f->next;
        }
        t = t->next;
    }
}

Ttable* TInstallEmpty(char* name) {
    if (TLookup(name) != NULL) {
        printf("Type Error: Type %s already defined\n", name);
        exit(1);
    }
    Ttable* node = (Ttable*)malloc(sizeof(Ttable));
    node->name   = strdup(name);
    node->fields = NULL;
    node->size   = 0;
    node->next   = NULL;
    if (TThead == NULL) { TThead = TTtail = node; }
    else { TTtail->next = node; TTtail = node; }
    return node;
}

void TSetFields(char* name, Tfield* fields) {
    Ttable* t = TLookup(name);
    if (!t) { printf("Type Error: %s not found\n", name); exit(1); }
    t->fields = fields;
    int size = 0;
    Tfield* f = fields;
    while (f) { size++; f = f->next; }
    t->size = size;
}