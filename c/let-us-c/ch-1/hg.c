#include <stdio.h>
int main(void)
{
    int n, d, s;
    printf("Enter a five-digit number: ");
    scanf("%d", &n);

    d = n % 10;
    n = n / 10;
    s = s + d;

    d = n % 10;
    n = n / 10;
    s = s + d;

    d = n % 10;
    n = n / 10;
    s = s + d;

    d = n % 10;
    n = n / 10;
    s = s + d;

    d = n % 10;
    s = s + d;

    printf("The sum of digits is %d.\n", s);
    return 0;
}