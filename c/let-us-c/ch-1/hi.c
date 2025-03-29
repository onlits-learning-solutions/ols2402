#include<stdio.h>
int main(void )
{
    imnt n, d1, d2, d3, d4, sum = 0;
    printf("Enter four digit number: ");
    scanf("%d",&n);

    d4 = n % 10;
    n = n / 10;

    d3 = n % 10;
    n = n / 10;

    d2 = n % 10;
    n = n / 10;

    d1 = n % 10;
    n = n / 10;
    sum = sum + (d1 + d4);

    printf("\n The sum of first and last digitn of number is %d.", sum);
    return 0; 

}