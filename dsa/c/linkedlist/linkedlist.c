#include "linkedlist.h"

int main(void)
{
    NODE *head = NULL;
    int ch;
    while (1)
    {
        messagebox("MAIN MENU");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("Bye!\n");
            return 0;
            break;
        case 1:
            display(head);
            break;
        case 2:
            insertmenu(&head);
            break;
        case 3:
            deletemenu(&head);
            break;
        default:
            break;
        }
    }
}