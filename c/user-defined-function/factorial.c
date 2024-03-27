#include <stdio.h>      //looks for headers in a special location
#include "udfunction.h" //looks for headers in the current location

int main(void)
{
    int n, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact = factorial(n); // function call
    printf("%d! = %d\n", n, fact);
    return 0;
}

// function defition
int factorial(int n) // function header
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}
