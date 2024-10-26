#include <stdio.h>
#include <stdlib.h>

typedef struct node // self-referential structure
{
    int data;
    struct node *next;
} NODE;

void insertBeginning(NODE **head)
{
    *head = malloc(sizeof(int));
    printf("value of head - fun2: %p\n", head);
}

void insertMenu(NODE **head)
{
    insertBeginning(&*head);
    printf("value of head - fun1: %p\n", head);
}

int main(void)
{
    NODE *head = NULL;
    insertMenu(&head);
    printf("value of head - main: %p\n", &head);
}