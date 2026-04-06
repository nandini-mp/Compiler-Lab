#include "classTable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../symbolTable/symbolTable.h"

static Ctable* CThead = NULL;
static Ctable* CTtail = NULL;
int classCount = 0;

void initClassTable() {
    CThead = NULL;
    CTtail = NULL;
}

Ctable* getClassTableHead() { return CThead; }

Ctable* CLookup(char* name) {
    Ctable* temp = CThead;
    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

Ctable* CInstall(char* name, char* parentName) {
    if (CLookup(name) != NULL) {
        printf("Class Error: Class %s already defined\n", name);
        exit(1);
    }
    Ctable* parent = parentName ? CLookup(parentName) : NULL;
    if (parentName != NULL && parent == NULL) {
        printf("Class Error: Parent class %s not found\n", parentName);
        exit(1);
    }

    Ctable* node = (Ctable*)malloc(sizeof(Ctable));
    node->name        = strdup(name);
    node->fields      = NULL;
    node->fieldCount  = 0;
    node->methods     = NULL;
    node->methodCount = 0;
    node->parent      = parent;
    node->next        = NULL;
    node->classIndex  = classCount++;

    if (CThead == NULL) { CThead = node; CTtail = node; }
    else { CTtail->next = node; CTtail = node; }

    // Copy parent's members if extending
    if (parent != NULL)
        copyParentMembers(node, parent);

    return node;
}

void CSetFields(char* name, Tfield* fields) {
    Ctable* c = CLookup(name);
    if (c == NULL) { printf("Class Error: Class %s not found\n", name); exit(1); }

    // Count new fields
    int newCount = 0;
    Tfield* f = fields;
    while (f != NULL) { newCount++; f = f->next; }

    if (c->fieldCount + newCount > 8) {
        printf("Class Error: Class %s exceeds 8 member fields\n", name);
        exit(1);
    }

    if (fields == NULL) return;

    // Append new fields after inherited ones
    if (c->fields == NULL) {
        c->fields = fields;
    } else {
        Tfield* last = c->fields;
        while (last->next != NULL) last = last->next;
        last->next = fields;
    }
    c->fieldCount += newCount;
}

Cmethod* createMethod(char* name, Ttable* returnType, Param* paramlist, int flabel) {
    Cmethod* m = (Cmethod*)malloc(sizeof(Cmethod));
    m->name        = strdup(name);
    m->returnType  = returnType;
    m->paramlist   = paramlist;
    m->flabel      = flabel;
    m->methodIndex = 0;   // set properly in CAddMethod
    m->next        = NULL;
    return m;
}

void CAddMethod(Ctable* c, Cmethod* method) {
    if (c == NULL) { printf("Class Error: NULL class\n"); exit(1); }

    // Check if method already exists (inherited — override it)
    Cmethod* existing = CMLookup(c, method->name);
    if (existing != NULL) {
        // Override: update flabel only, keep same methodIndex
        existing->flabel = method->flabel;
        existing->paramlist = method->paramlist;
        existing->returnType = method->returnType;
        return;
    }

    if (c->methodCount >= 8) {
        printf("Class Error: Class %s has too many methods\n", c->name);
        exit(1);
    }
    method->methodIndex = c->methodCount;
    c->methodCount++;

    if (c->methods == NULL) c->methods = method;
    else {
        Cmethod* temp = c->methods;
        while (temp->next != NULL) temp = temp->next;
        temp->next = method;
    }
}

Cmethod* CMLookup(Ctable* c, char* methodname) {
    if (c == NULL) return NULL;
    Cmethod* m = c->methods;
    while (m != NULL) {
        if (strcmp(m->name, methodname) == 0)
            return m;
        m = m->next;
    }
    return NULL;
}

Tfield* CFLookup(Ctable* c, char* fieldname) {
    if (c == NULL) return NULL;
    Tfield* f = c->fields;
    int index = 0;
    while (f != NULL) {
        if (strcmp(f->name, fieldname) == 0) {
            f->fieldIndex = index;  // set offset for code generation
            return f;
        }
        index++;
        f = f->next;
    }
    return NULL;
}

void printClassTable() {
    Ctable* c = CThead;
    printf("\n--- Class Table ---\n");
    while (c != NULL) {
        printf("Class: %-15s Parent: %s\n",
               c->name,
               c->parent ? c->parent->name : "NULL");

        printf("  Fields (%d):\n", c->fieldCount);
        Tfield* f = c->fields;
        int fi = 0;
        while (f != NULL) {
            printf("    [%d] %-15s type: %s\n",
                   fi++,
                   f->name,
                   f->type ? f->type->name : "NULL");
            f = f->next;
        }

        printf("  Methods (%d):\n", c->methodCount);
        Cmethod* m = c->methods;
        while (m != NULL) {
            printf("    [%d] %-15s returnType: %-10s flabel: F%d\n",
                   m->methodIndex,
                   m->name,
                   m->returnType ? m->returnType->name : "NULL",
                   m->flabel);
            // print params
            Param* p = m->paramlist;
            if (p == NULL) {
                printf("         (no parameters)\n");
            } else {
                while (p != NULL) {
                    printf("         param: %-10s type: %s\n",
                           p->name,
                           p->type ? p->type->name : "NULL");
                    p = p->next;
                }
            }
            m = m->next;
        }
        c = c->next;
    }
    printf("--- End Class Table ---\n\n");
}

void copyParentMembers(Ctable* child, Ctable* parent) {
    // Copy fields — deep copy the linked list
    Tfield* pf = parent->fields;
    Tfield* lastField = NULL;
    while (pf != NULL) {
        Tfield* newf = createField(pf->name, pf->type);
        if (child->fields == NULL) child->fields = newf;
        else lastField->next = newf;
        lastField = newf;
        child->fieldCount++;
        pf = pf->next;
    }

    // Copy methods — same flabels (not overridden yet)
    Cmethod* pm = parent->methods;
    while (pm != NULL) {
        Cmethod* newm = (Cmethod*)malloc(sizeof(Cmethod));
        newm->name        = strdup(pm->name);
        newm->returnType  = pm->returnType;
        newm->paramlist   = pm->paramlist;  // shared, not deep copied
        newm->flabel      = pm->flabel;     // same label as parent
        newm->methodIndex = pm->methodIndex;
        newm->next        = NULL;
        CAddMethod(child, newm);
        pm = pm->next;
    }
}

int isDescendant(Ctable* child, Ctable* parent) {
    Ctable* c = child;
    while (c != NULL) {
        if (c == parent) return 1;
        c = c->parent;
    }
    return 0;
}