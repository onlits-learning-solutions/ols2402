#include "linkedlist.h"

void printline(int n)
{
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void messagebox(char *message)
{
    int n = strlen(message);
    printline(n);
    printf("%s", message);
    printline(n);
}

void display(NODE *head)
{
    if(head == NULL)
    {
        messagebox("List Empty!");
        return;
    }

    NODE *itr = head;
    while (itr != NULL)
    {
        printf("%d\n", itr->data);
        itr = itr->next;
    }
}