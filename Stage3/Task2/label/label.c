#include "label.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int labelCount = 0;

int getLabel()
{
    return labelCount++;
}