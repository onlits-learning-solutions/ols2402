#include "linkedlist.h"

void deletemenu(NODE **head)
{
    int ch;
    while (1)
    {
        messagebox("DELETE MENU");
        printf("1. Delete all\n");
        printf("2. Delete from the beginning\n");
        printf("3. Delete from the end\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            deleteall(head);
            break;
        case 2:
            deletebeginning(head);
            break;
        case 3:
            deleteend(head);
            break;
        default:
            break;
        }
    }
}

void deleteall(NODE **head)
{
}

void deletebeginning(NODE **head) // O(1)
{
    if (*head == NULL)
    {
        messagebox("List Empty!");
        return;
    }

    NODE *temp = *head;
    *head = (*head)->next;
    free(temp);
    messagebox("Node deleted!");
}

void deleteend(NODE **head) // O(n)
{
    if (*head == NULL) // Empty list
    {
        messagebox("List Empty!");
        return;
    }
    else if ((*head)->next == NULL) // Single Node
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        NODE *itr = *head;
        NODE *temp = NULL;
        while (itr->next != NULL)
        {
            temp = itr;
            itr = itr->next;
        }
        free(itr);
        temp->next = NULL;
    }
    messagebox("Node deleted!");
}