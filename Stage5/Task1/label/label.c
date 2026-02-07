#include "label.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int labelCount = 0;
int fnLabelCount = 0;

struct labelTableEntry* head = NULL;
struct labelTableEntry* tail = NULL;

int getLabel()
{
    return labelCount++;
}

int getFnLabel()
{
    return fnLabelCount++;
}

labelTableEntry* createNewEntry(char* labelName, int addr)
{
    labelTableEntry* entry = (labelTableEntry*)malloc(sizeof(labelTableEntry));
    strcpy(entry->labelName,labelName);
    entry->addr=addr;
    entry->next=NULL;
    return entry;
}

int addrForLabel(char* labelName)
{
    labelTableEntry* temp = head;
    while (temp)
    {
        if (strcmp(temp->labelName,labelName)==0)
            return temp->addr;
        temp=temp->next;
    }
    return -1;
}

int addLabel(char* labelName, int addr)
{
    int label = addrForLabel(labelName);
    if (label!=-1) return -1;
    labelTableEntry* entry = (labelTableEntry*)malloc(sizeof(labelTableEntry));
    strcpy(entry->labelName,labelName);
    entry->addr = addr;
    if (!head)
    {
        head = entry;
        tail = entry;
    }
    else
    {
        tail->next = entry;
        tail = entry;
    }
    return 0;
}

int removeLabel(char* labelName)
{
    labelTableEntry* curr = head;
    labelTableEntry* prev = NULL;
    while (curr)
    {
        if (strcmp(curr->labelName,labelName)==0)
        {
            if (curr == head) head = curr->next;
            else prev->next = curr->next;
            if (curr==tail) tail = prev;
            free(curr);
            return 0;
        }
        prev = curr;
        curr = curr->next;
    }
    return -1;
}

LStack *stackhead;

void pushStack(int condLabel, int rest){
    LStack *temp=(LStack*)malloc(sizeof(LStack));
    temp->condLabel=condLabel;
    temp->rest=rest;
    temp->next=stackhead;
    stackhead=temp;
}

struct LStack *popStack(){
    LStack *temp=stackhead;
    stackhead=stackhead->next;
    return temp;
}

struct LStack *peekStack(){
    return stackhead;
}