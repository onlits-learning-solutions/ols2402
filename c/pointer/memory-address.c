#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, *p;
    char c, *q;
    printf("The value of a is %d.\n", a);
    printf("The address of a is %p.\n", &a);
    printf("The size of a is %ld bytes.\n", sizeof(a));      //4-bytes
    printf("The size of q is %ld bytes.\n", sizeof(q));      //8-bytes
    printf("The size of c is %ld bytes.\n", sizeof(c));      //1-byte
    printf("The size of p is %ld bytes.\n", sizeof(p));      //8-bytes
    return 0;
}

