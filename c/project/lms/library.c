/*
This file will serve as the entry point of LMS
*/
#include <stdio.h>
#include <stdlib.h>
#include "common.c"
#include "book.c"

int main(void)
{
    while (1)
    {
        int ch;
        printf("MAIN MENU\n");
        printline(15);
        printf("1. Book\n");
        printf("2. Member\n");
        printf("3. Transaction\n");
        printf("4. Reports\n");
        printline(15);
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nBye!\n");
            exit(0);
            break;
        case 1:
            bookmenu();
            break;
        default:
            break;
        }
    }
    
}