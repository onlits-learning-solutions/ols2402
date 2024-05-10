#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

typedef struct list
{
    NODE *head;
} LIST;

void display(NODE *head);
void append(NODE **itr, int value);
void search(NODE *itr, int value);
void update(NODE *itr, int oldvalue, int newvalue);
void printline(int n);

int main(void)
{
    LIST list;
    NODE *head = NULL;

    int ch, value, oldvalue;

    while (1)
    {
        printf("\nMAIN MENU\n");
        printf("1. Display List\n");
        printf("2. Add to List\n");
        printf("3. Search List\n");
        printf("4. Update List\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nBye!\n");
            exit(0);
            break;
        case 1:
            display(head);
            break;
        case 2:
            printf("\nEnter an integer value: ");
            scanf("%d", &value);
            append(&head, value);
            break;
        case 3:
            printf("\nEnter an integer value: ");
            scanf("%d", &value);
            search(head, value);
            break;
        case 4:
            printf("\nEnter old value: ");
            scanf("%d", &oldvalue);
            printf("\nEnter new value: ");
            scanf("%d", &value);
            update(head, oldvalue, value);
            break;
        default:
            printf("\nInvalide Option\n\n");
        }
    }
}

void display(NODE *head) // Traversal
{
    if (head == NULL)
    {
        printf("\nList empty. Nothing to display!\n\n");
        return;
    }

    NODE *itr = head;
    printf("\nList content\n");
    printline(20);
    do
    {
        printf("%d\n", itr->data);
        itr = itr->next;
    } while (itr != NULL);
    printline(20);
    printf("\n");
}

void append(NODE **head, int value)
{
    if (*head == NULL) // creating 1st node
    {
        *head = (NODE *)malloc(sizeof(NODE));
        (*head)->data = value;
        (*head)->next = NULL;
        printf("\nNode added!\n\n");
        return;
    }

    NODE *itr = *head;
    NODE *new = NULL;
    do // Finds the last node
    {
        new = itr;
        itr = itr->next;
    } while (itr != NULL);

    new->next = (NODE *)malloc(sizeof(NODE));
    new->next->data = value;
    new->next->next = NULL;
    printf("\nNode added!\n\n");
}

void search(NODE *itr, int value)
{
    int found = 0;
    if (itr == NULL)
    {
        printf("\nList is empty. search aborted!\n");
        return;
    }

    do
    {
        if (itr->data == value)
        {
            found = 1;
            break;
        }
        itr = itr->next;
    } while (itr != NULL);

    found == 1 ? printf("\nData found!\n\n") : printf("\nData not found!\n\n");
}

void update(NODE *itr, int oldvalue, int newvalue)
{
    int found = 0;
    if (itr == NULL)
    {
        printf("\nList is empty. Nothing to update!\n");
        return;
    }

    do
    {
        if (itr->data == oldvalue)
        {
            found = 1;
            itr->data = newvalue;
            break;
        }
        itr = itr->next;
    } while (itr != NULL);

    found == 1 ? printf("\nData update!\n\n") : printf("\nData not found!\n\n");
}

void printline(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("-");
    }
    printf("\n");
}