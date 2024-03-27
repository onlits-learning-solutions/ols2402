/*
Program to demostrate the use of static keyword
Date: 20240327
*/

#include <stdio.h>

int incrementa(void);

int main(void)
{
    for (int i = 1; i <= 5; i++)
        printf("%d\n", incrementa());
    return 0;
}

int incrementa(void)
{
    static int a = 0;
    return ++a;
}