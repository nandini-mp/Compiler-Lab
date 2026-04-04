#include "classTable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../symbolTable/symbolTable.h"

static Ctable* CThead = NULL;
static Ctable* CTtail = NULL;

void initClassTable() {
    CThead = NULL;
    CTtail = NULL;
}

Ctable* CLookup(char* name) {
    Ctable* temp = CThead;
    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

Ctable* CInstall(char* name, Ctable* parent) {
    if (CLookup(name) != NULL) {
        printf("Class Error: Class %s already defined\n", name);
        exit(1);
    }
    Ctable* node = (Ctable*)malloc(sizeof(Ctable));
    node->name        = strdup(name);
    node->fields      = NULL;
    node->fieldCount  = 0;
    node->methods     = NULL;
    node->methodCount = 0;
    node->parent      = parent;  // NULL for Stage 7
    node->next        = NULL;

    if (CThead == NULL) {
        CThead = node;
        CTtail = node;
    } else {
        CTtail->next = node;
        CTtail = node;
    }
    return node;
}

void CSetFields(char* name, Tfield* fields) {
    Ctable* c = CLookup(name);
    if (c == NULL) {
        printf("Class Error: Class %s not found\n", name);
        exit(1);
    }

    // count fields and check limit
    int count = 0;
    Tfield* f = fields;
    while (f != NULL) {
        count++;
        f = f->next;
    }
    if (count > 8) {
        printf("Class Error: Class %s has too many member fields (max 8)\n", name);
        exit(1);
    }

    c->fields     = fields;
    c->fieldCount = count;
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
    if (c == NULL) {
        printf("Class Error: NULL class in CAddMethod\n");
        exit(1);
    }

    // check duplicate method name
    if (CMLookup(c, method->name) != NULL) {
        printf("Class Error: Method %s already defined in class %s\n",
               method->name, c->name);
        exit(1);
    }

    // check method limit
    if (c->methodCount >= 8) {
        printf("Class Error: Class %s has too many methods (max 8)\n", c->name);
        exit(1);
    }

    // assign method index = current count
    method->methodIndex = c->methodCount;
    c->methodCount++;

    // append to end of methods list
    if (c->methods == NULL) {
        c->methods = method;
    } else {
        Cmethod* temp = c->methods;
        while (temp->next != NULL)
            temp = temp->next;
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