#include <stdio.h>
#define SIZE 5

int main(void) // O(n^2)
{
    int nums[SIZE] = {52, 1, 42, 19, 26}; // O(1)

    printf("Unsorted Array!\n");   // O(1)
    for (int i = 0; i < SIZE; i++) // O(n)
    {
        printf("%d\n", nums[i]);
    }

    for (int i = 0; i < SIZE - 1; i++) // O(n)
    {
        for (int j = i + 1; j < SIZE; j++) // O(n) x O(n)  =   O(n^2)
        {
            if (nums[j] > nums[i])
            {
                int t = nums[j];
                nums[j] = nums[i];
                nums[i] = t;
            }
        }
    }

    printf("Sorted Array!\n");
    for (int i = 0; i < SIZE; i++) // O(n)
    {
        printf("%d\n", nums[i]);
    }
}

// Time Complexity  =   O(n^2)
// Space Complexity =   O(1)