#include <stdio.h>

int main(void)
{
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d.\n", n, fact);
    return 0;
}

/*
    5! = 5 * 4 * 3 * 2 * 1  =   120
    6! = 6 * 5 * 4 * 3 * 2 * 1  =   720

    Limitation: Calculates factorial upto 12 only
*/