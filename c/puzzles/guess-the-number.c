#include <stdio.h>
int main(int argc, char const *argv[])
{
    int low = 1, high = 100, i = 0, mid;
    char response;

    printf("Guess a number between %d and %d, then, press <enter> to begin.\n", low, high);
    getchar();

    while (low <= high)
    {
        i++;
        mid = (low + high) / 2;
        printf("Is the number %d [y/n]? ", mid);
        scanf("%c%*c", &response);
        if (response == 'y')
        {
            printf("Wow! I guessed your number in %d attempt(s).\n", i);
            return 0;
        }
        printf("Is the number higher than %d [y/n]? ", mid);
        scanf("%c%*c", &response);
        if (response == 'y')
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("You were trying to cheat.\n");
    return 0;
}
