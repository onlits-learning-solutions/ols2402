#include <stdio.h>
#include "udfunction.h"

int main(void)
{
    int n, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("%d! = %d\n", n, fact);
    return 0;
}

int factorial(int n)
{
    int fact;
    if (n == 1)
        return 1; // base condition

    fact = n * factorial(n - 1);    //recursive call
    return fact;
}