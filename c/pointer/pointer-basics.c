#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *p, *q, *r;
    p = malloc(sizeof(int));        //Dynamic memory allocation
    q = malloc(sizeof(int));        //Dynamic memory allocation
    r = malloc(sizeof(int));        //Dynamic memory allocation
    printf("The address of p is %p.\n", &p);
    printf("The address of q is %p.\n", &q);
    printf("The address of r is %p.\n", &r);
    printf("The content of p is %p.\n", p);
    printf("The content of q is %p.\n", q);
    printf("The content of r is %p.\n", r);
    printf("Please enter two integers below:\n");
    scanf("%d%d", p, q);
    *r = *p + *q;
    printf("The sum is %d.\n", *r);
    return 0;
}
