#ifndef LABEL_H
#define LABEL_H

typedef struct labelTableEntry {
    char labelName[10];
    int addr;
    struct labelTableEntry* next;
} labelTableEntry;

extern int labelCount;

int getLabel();
labelTableEntry* createNewEntry(char* labelName, int addr);
int addrForLabel(char* labelName);
int addLabel(char* labelName, int addr);
int removeLabel(char* labelname);

#endif