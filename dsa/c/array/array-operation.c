#include <stdio.h>
#include <stdlib.h>

void display(void);

int main(int argc, char const *argv[])
{
    int ch;
    while (1)
    {
        printf("\nMAIN MENU\n");
        printf("1. Display list (Traversal)\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            printf("\nbye!\n\n");
            exit(0);
            break;
        case 1:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}

void display(void)
{
}
