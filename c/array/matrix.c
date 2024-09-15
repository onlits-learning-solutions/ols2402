#include <stdio.h>
int main(void)
{
    int matrix[3][3];
    printf("Enter the element of 3 X 3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d, %d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nThe matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}