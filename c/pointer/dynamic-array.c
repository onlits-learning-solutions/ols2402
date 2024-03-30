#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *age, size, sum, avg;
    printf("Enter size of data: ");
    scanf("%d", &size);
    age = (int *)calloc(size, sizeof(int)); // Dynamic memory allocation
    printf("Enter %d age below:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &age[i]);
        sum = sum + age[i];
    }
    avg = sum / size;
    printf("The average age is %d.\n", avg);
    free(age);
    return 0;
}