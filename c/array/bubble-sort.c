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
        for (int j = 0; j < SIZE - i - 1; j++) // O(n) x O(n)  =   O(n^2)
        {
            if (nums[j] > nums[j + 1])
            {
                int t = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = t;
            }
        }
    }

    printf("Sorted Array!\n");
    for (int i = 0; i < SIZE; i++) // O(n)
    {
        printf("%d\n", nums[i]);
    }
}