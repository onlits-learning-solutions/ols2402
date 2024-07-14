#include <stdio.h>
#define SIZE 5

int main(int argc, char const *argv[])
{
    int arr[SIZE] = {45, 9, 101, 88, 53};
    int *ptr = &arr[0];

    int largest = *ptr;

    for (int i = 1; i <= SIZE; i++)
    {
        if (*ptr > largest)
            largest = *ptr;
        
        ptr++;
    }

    printf("Largest value %d.\n", largest);

    return 0;
}
