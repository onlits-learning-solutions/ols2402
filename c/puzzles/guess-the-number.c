#include <stdio.h>
int main(int argc, char const *argv[])
{
    int low = 1, high = 100, i;
    char response;

    printf("Guess a number between %d and %d, then, press <enter> to begin.\n", low, high);
    getchar();
    while (low <= high)
    {
        i++;
        printf("Is the number %d [y/n]? ", i);
        scanf("%c%*c", &response);
        if (response == 'y')
        {
            printf("Wow! I guessed your number in %d attempt(s).\n", i);
            return 0;
        }
    }
    printf("You were trying to cheat.\n");
    return 0;
}
