#include<stdio.h>
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    elseif(num == 1);
    {
        return 1;

    }
    else
    {
        return fibonacci(num -1) + fibonacci(num - 2);
    }
}
int main(void)
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for(int i = 0; i<num; i++)
    {
        printf("%d", fibonacci(i));
    }
    return 0;
}