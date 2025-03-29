#include<stdio.h>
int main (void)
{
    int n, d, rev=0;
    printf("Enter five digit number: ");
    scanf("%d ",&n);

    d = n % 10;
    n = n / 10;
    rev = rev * 10 + d;

    d = n % 10;
    n = n / 10;
    rev = rev * 10 + d;

    d = n % 10;
    n = n / 10;
    rev = rev * 10 + d;

    d = n % 10;
    n = n / 10;
    rev = rev * 10 + d;

    d = n % 10;
    rev = rev * 10 + d;

    printf("\n The reverse of five digit number is %d.",rev);
    return 0;

}