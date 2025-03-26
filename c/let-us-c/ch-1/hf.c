#include<stdio.h>
int main(void)
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);

    temp = a;
    a = b;
    b = temp;
    printf("\n After swapping %d %d ", a,b);
    return 0;
}