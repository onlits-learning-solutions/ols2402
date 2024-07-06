#include <stdio.h>

#define MAX 5

int main(void)
{
    char object[MAX][50];

    printf("Enter the names of %d daily use objects below:\n", MAX);

    for (int i = 0; i < MAX; i++)
    {
        printf("%d. ", i + 1);
        scanf("%[^\n]%*c", object[i]);
    }

    printf("\nList of objects you entered:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d. %s\n", i + 1, object[i]);
    }
    return 0;
}