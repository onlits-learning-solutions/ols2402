#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void drawLine(int n);
void messageBox(char *message);
void display(int *arr, int size);
void insertBeginning(int *arr, int size);
void insertEnd(int *arr, int *size);
void insert(int *arr, int size, int index);

int main(int argc, char const *argv[])
{
    int arr[MAX], size = 0;
    int ch;

    while (1)
    {
        printf("\nMAIN MENU\n");
        drawLine(strlen("2. Insert element at the beginning"));
        printf("\n1. Display list (Traversal)\n");
        printf("2. Insert element at the beginning\n");
        printf("3. Insert element at the end\n");
        printf("4. Insert element at a given index\n");
        drawLine(strlen("2. Insert element at the beginning"));
        printf("\nEnter choice [0 to exit]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            printf("\nbye!\n\n");
            exit(0);
            break;
        case 1:
            display(arr, size);
            break;
        case 3:
            insertEnd(arr, &size);
            break;
        default:
            messageBox("Invalid Option!");
            break;
        }
    }
    return 0;
}

void drawLine(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("-");
    }
}

void messageBox(char *message)
{
    printf("\n");
    drawLine(strlen(message));
    printf("\n%s\n", message);
    drawLine(strlen(message));
    printf("\n");
}

void display(int *arr, int size)
{
    if(size == 0)
    {
        messageBox("Array empty!");
        return;
    }
    printf("\nArray Content:\n");
    drawLine(strlen("Array Content:"));
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    drawLine(strlen("Array Content:"));
    printf("\n\n");
}

void insertBeginning(int *arr, int size)
{

}

void insertEnd(int *arr, int *size)
{
    if(*size >= MAX)
    {
        messageBox("Array full!");
        return;
    }

    printf("Enter a value: ");
    scanf("%d", &arr[*size]);

    (*size)++;

    messageBox("Value inserted!");
}

void insert(int *arr, int size, int index)
{

}