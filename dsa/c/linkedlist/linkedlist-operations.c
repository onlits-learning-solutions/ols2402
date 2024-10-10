#include <stdio.h>

typedef struct node // self-referential structure
{
    int data;
    struct node *next;
} NODE;

int main(int argc, char const *argv[])
{
    NODE head;
    head.data = 10;
    printf("%d\n", head.data);
    return 0;
}
