#include "linkedlist.h"

int main(void)
{
    NODE *head = NULL;
    printf("main.head: %p\n", head);
    printf("&main.head: %p\n", &head);
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
            printf("main.head: %p\n", head);
            return 0;
            break;
        case 1:
            display(head);
            break;
        case 2:
            insertmenu(&head);
            break;
        default:
            break;
        }
    }
}