#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("The string %s has %ld characters.\n", str, strlen(str));
    return 0;
}