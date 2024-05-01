#include <stdio.h>
#include "library.h"

void printline(int l)
{
    for (int i = 1; i <= l; i++)
    {
        printf("-");
    }
    printf("\n");
}