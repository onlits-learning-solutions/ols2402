#include <stdio.h>
int main(void)
{
    char name[50], quote[100];
    printf("Enter your name: ");
    scanf("%[^\n]%*c", name);   // %*c is used to eliminate the trailing \n.
    // gets(name);              // warning: the `gets' function is dangerous and should not be used.
    // printf("Enter your favourite quote: ");
    // scanf("%[^\n]", quote);
    printf("Good Morning! %s\n", name);
    return 0;
}