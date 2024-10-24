#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

#define BOLD "\e[1m"
#define ITALICS "\e[3m"
#define UNDERLINE "\e[4m"
#define OFF "\e[m"

#define ERROR 0
#define INFO 1
#define NORMAL 2

typedef struct node // self-referential structure
{
    int data;
    struct node *next;
} NODE;

void drawLine(int n, int type);
void messageBox(char *message, int type);

void display(NODE *head);
void insertMenu(NODE **head);
void insertBeginning(NODE ***head);
void insertEnd(NODE *head);
void insert(NODE *head);

int main(int argc, char const *argv[])
{
    NODE *head = NULL;

    int ch;
    int linesize = strlen("1.  Display list (Traversal)");

    while (1) // Cannot determine complexity as this process does not comply
    {         // standard algorithm definition
        printf(BOLD "\nMAIN MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1. Display list (Traversal)\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Check sort status\n");
        printf("6. Sort\n");
        printf("7. Seed Array\n");
        drawLine(linesize, NORMAL);
        printf("\nEnter choice [0 to exit]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            printf("*head (main): %p\n", head);
            printf(BLUE BOLD "\nbye!\n\n" RESET);
            exit(0);
            break;
        case 1:
            display(head);
            break;
        case 2:
            insertMenu(&head);
            break;
        case 3:
            // deleteMenu(arr, &size);
            break;
        case 4:
            // searchMenu(arr, size);
            break;
        case 5:
            // isSorted(arr, size);
            break;
        case 6:
            // sortMenu(arr, size);
            break;
        case 7:
            // seed(arr, &size);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }
    }
}

void drawLine(int n, int type) // O(n)
{
    for (int i = 1; i <= n; i++)
    {
        if (type == INFO)
            printf(GREEN BOLD "-" OFF RESET);
        else if (type == ERROR)
            printf(RED BOLD "-" OFF RESET);
        else
            printf("-");
    }
}

void messageBox(char *message, int type) // O(1)
{
    printf("\n");
    drawLine(strlen(message), type);
    if (type == INFO)
        printf(GREEN BOLD "\n%s\n" OFF RESET, message);
    else if (type == ERROR)
        printf(RED BOLD "\n%s\n" OFF RESET, message);
    else
        printf("\n%s\n", message);
    drawLine(strlen(message), type);
    printf("\n");
}

void display(NODE *head)
{
    if (!head)
    {
        messageBox("List empty!", ERROR);
        return;
    }

    NODE *itr = head;

    printf("Contents of the list\n");
    drawLine(strlen("Contents of list"), NORMAL);
    while (itr->next)
    {
        printf("%d\n", itr->data);
    }
    drawLine(strlen("Contents of list"), NORMAL);
}

void insertMenu(NODE **head)
{
    int ch, exit = 0;
    int linesize = strlen("3.  Insert at a specific index");
    while (1)
    {
        printf(BOLD "\nINSERT MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a specific index\n");
        drawLine(linesize, NORMAL);
        printf("\nEnter choice [0 for MAIN MENU]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit = 1;
            break;
        case 1:
            insertBeginning(&(*head));
            break;
        case 2:
            insertEnd(head);
            break;
        case 3:
            insert(head);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }

        if (exit == 1)
            break;
    }
    printf("*head (insert): %p\n", head);
}

void insertBeginning(NODE ***head)
{
    if (!(*head))
    {
        **head = (NODE *)malloc(sizeof(NODE));
        printf("Enter a value: ");
        scanf("%d", &(**head)->data);
        (**head)->next = NULL;
        messageBox("Node created!", INFO);
        printf("*head (insertBeginning): %p\n", **head);
        return;
    }
}

void insertEnd(NODE *head)
{
}

void insert(NODE *head)
{
}