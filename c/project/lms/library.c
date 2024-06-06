/*
This file will serve as the entry point of LMS
*/
#include <stdio.h>
#include <stdlib.h>
#include "lib/library.h"

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
        case 2:
            membermenu();
            break;
        case 3:
            printf("Under Construction... \n\n");
            break;
        case 4:
            printf("Under Construction ...\n\n");
            break;
        default:
            printf("\nInvalid option!\n\n");
        }
    }
    
}