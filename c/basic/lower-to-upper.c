#include <stdio.h>
int main()
{
    char lower, upper;
    printf("Enter a letter in lowercase: ");
    scanf("%c", &lower);
    if (lower >= 97 && lower <= 123)
    {
        upper = lower - 32;
        printf("%c\n", upper);
    }
    else
    {
        printf("%c is not a lowercase letter.\n", lower);
    }
    return 0;
}