#ifndef EVALUATE_H
#define EVALUATE_H

#include "codegen.h"

extern int variables[26];

void evaluateAndPrint(struct tnode *root);
int evaluate(struct tnode *root);
int getVariableIndex(tnode *root);

#endif
