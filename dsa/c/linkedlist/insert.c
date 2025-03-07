#include "linkedlist.h"

void insertmenu(NODE **head)
{
    int ch;
    while (1)
    {
        messagebox("INSERT MENU");
        printf("1. Insert in the beginning\n");
        printf("2. Insert at the end\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            insertbeginning(head);
            break;
        case 2:
            insertend(head);
            break;
        default:
            break;
        }
    }
}

void insertbeginning(NODE **head) // O(1)
{
    NODE *temp = *head;

    *head = (NODE *)malloc(sizeof(NODE));

    printf("Enter value: ");
    scanf("%d", &(*head)->data);
    (*head)->next = NULL;

    if (temp != NULL)
    {
        (*head)->next = temp;
    }

    messagebox("Value inserted!");
}

void insertend(NODE **head)
{
    NODE **itr = head;
    if (*itr == NULL)
    {
        *itr = (NODE *)malloc(sizeof(NODE));
        printf("If block: *itr: %p\n", *itr);
        printf("If block: *head: %p\n", *head);
    }
    else
    {
        printf("Else block!\n");
        while ((*itr)->next != NULL)
        {
            *itr = (*itr)->next;
            printf("*itr: %p\n", *itr);
        }

        (*itr)->next = (NODE *)malloc(sizeof(NODE));
        *itr = (*itr)->next;
        printf("Else block: *itr: %p\n", *itr);
        printf("Else block: *head: %p\n", *head);
    }

    printf("Enter value: ");
    scanf("%d", &(*itr)->data);
    (*itr)->next = NULL;
    printf("Final: *itr: %p\n", *itr);

    messagebox("Value inserted!");
}