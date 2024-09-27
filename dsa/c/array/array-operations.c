#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void drawLine(int n);
void messageBox(char *message);
void display(int const *arr, int size);
void insertBeginning(int *arr, int *size);
void insertEnd(int *arr, int *size);
void insert(int *arr, int *size);
void deleteBeginning(int *arr, int *size);
void deleteEnd(int *arr, int *size);
void delete(int *arr, int *size);
void linearSearch(int const *arr, int size);
void binearSearch(int const *arr, int size);

int main(int argc, char const *argv[])
{
    int arr[MAX], size = 0, sorted = 0;
    int ch;
    int linesize = strlen("7. Delete element at the given index");

    while (1) // O(~)
    {
        printf("\nMAIN MENU\n");
        drawLine(linesize);
        printf("\n1. Display list (Traversal)\n");
        printf("2. Insert element at the beginning\n");
        printf("3. Insert element at the end\n");
        printf("4. Insert element at a given index\n");
        printf("5. Delete element from beginning\n");
        printf("6. Delete element from the end\n");
        printf("7. Delete element at the given index\n");
        printf("8. Search (using linear search)\n");
        printf("9. Search (using binary search)\n");

        drawLine(linesize);
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
        case 2:
            insertBeginning(arr, &size);
            break;
        case 3:
            insertEnd(arr, &size);
            break;
        case 4:
            insert(arr, &size);
            break;
        case 5:
            deleteBeginning(arr, &size);
            break;
        case 6:
            deleteEnd(arr, &size);
            break;
        case 7:
            delete (arr, &size);
            break;
        case 8:
            linearSearch(arr, size);
            break;
        default:
            messageBox("Invalid Option!");
            break;
        }
    }
    return 0;
}

void drawLine(int n) // O(n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("-");
    }
}

void messageBox(char *message) // O(1)
{
    printf("\n");
    drawLine(strlen(message));
    printf("\n%s\n", message);
    drawLine(strlen(message));
    printf("\n");
}

void display(int const *arr, int size) // O(n)
{
    if (size == 0)
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

void insertBeginning(int *arr, int *size) // O(n)
{
    if (*size >= MAX)
    {
        messageBox("Array full!");
        return;
    }

    for (int i = *size; i > 0; i--)
        arr[i] = arr[i - 1];

    printf("Enter a value: ");
    scanf("%d", &arr[0]);

    (*size)++;

    messageBox("Value inserted!");
}

void insertEnd(int *arr, int *size) // O(1)
{
    if (*size >= MAX)
    {
        messageBox("Array full!");
        return;
    }

    printf("Enter a value: ");
    scanf("%d", &arr[*size]);

    (*size)++;

    messageBox("Value inserted!");
}

void insert(int *arr, int *size) // O(n)
{
    int index;
    if (*size >= MAX)
    {
        messageBox("Array full!");
        return;
    }

    printf("Enter index: ");
    scanf("%d", &index);

    if (index > *size || index < 0)
    {
        messageBox("Not a valid index!");
        return;
    }

    for (int i = *size; i > index; i--)
        arr[i] = arr[i - 1];

    printf("Enter a value: ");
    scanf("%d", &arr[index]);

    (*size)++;

    messageBox("Value inserted!");
}

void deleteBeginning(int *arr, int *size) // O(n)
{
    if (*size == 0)
    {
        messageBox("Array empty!");
        return;
    }

    for (int i = 0; i < *size - 1; i++)
        arr[i] = arr[i + 1];

    (*size)--;

    messageBox("Value removed!");
}

void deleteEnd(int *arr, int *size) // O(1)
{
    if (*size == 0)
    {
        messageBox("Array empty!");
        return;
    }

    (*size)--;

    messageBox("Value removed!");
}

void delete(int *arr, int *size) // O(n)
{
    int index;

    if (*size == 0)
    {
        messageBox("Array empty!");
        return;
    }

    printf("Enter index: ");
    scanf("%d", &index);

    if (index > *size || index < 0)
    {
        messageBox("Not a valid index!");
        return;
    }

    for (int i = index; i < *size - 1; i++)
        arr[i] = arr[i + 1];

    (*size)--;

    messageBox("Value removed!");
}

void linearSearch(int const *arr, int size)
{
    int key, index = -1;
    if (size == 0)
    {
        messageBox("Array empty!");
        return;
    }

    printf("Enter the value to search: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
        messageBox("Value not found!");
    else
    {
        char *strIndex;
        sprintf(strIndex, "%d", index);
        messageBox(strcat("Value found at index", strIndex));
    }
}

void binearSearch(int const *arr, int size)
{
}