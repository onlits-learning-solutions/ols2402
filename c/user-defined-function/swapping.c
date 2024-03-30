#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 10, b = 20;
    printf("The values of a and be before swapping are %d and %d, respectively.\n", a, b);
    swap(&a, &b);
    printf("The values of a and be after swapping are %d and %d, respectively.\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}