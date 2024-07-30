#include <stdio.h>

int fibonacci(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The %dth fibonacci number is: %d.\n", n, fibonacci(n));
    // printf("The require fibonacci series is:\n");
    // for (int i = 1; i <= n; i++)
    //     printf("%d\n", fibonacci(i));
    return 0;
}

int fibonacci(int n)
{
    if(n <= 1)
        return n;

    return fibonacci(n-1) + fibonacci(n-2);
}