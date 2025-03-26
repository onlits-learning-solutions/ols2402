#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch, a, b, c;
    while (1)
    {
        printf("\n\nCALCULATION PROGRAM\n\n");
        printf("Choose one of the following:\n\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("\n\nEnter choice (0 to exit): [ ]\b\b");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("Bye!\n");
            exit(0);
            break;
        case 1:
            printf("\nEnter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            c = a + b;
            printf("The sum is %d.\n", c);
            break;
        case 2:
            printf("\nEnter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            c = a - b;
            printf("The difference is %d.\n", c);
            break;
        case 3:
            printf("\nEnter the first number: ");
            scanf("%d",&a);
            printf("\nEnter the second number: ");
            scanf("%d",&b);
            c = a * b;
            printf("The product is %d.\n", c);
            break;
        case 4:
            printf("\nEnter the first number: ");
            scanf("%d",&a);
            printf("\nEnter the second number: ");
            scanf("%d",&d);
            c = a / b;
            printf("The division is %d.\n" c);
            break;        
        default:
            printf("\nInvalid option! Retry!\n\n");
            break;
        }
    }
    return 0;
}