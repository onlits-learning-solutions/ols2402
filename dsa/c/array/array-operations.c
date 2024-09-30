#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

#define BOLD "\e[1m"
#define ITALICS "\e[3m"
#define UNDERLINE "\e[4m"
#define OFF "\e[m"

#define ERROR 0
#define INFO 1
#define NORMAL 2

#define MAX 100

void drawLine(int n, int type);
void messageBox(char *message, int type);
void display(int const *arr, int size);
void insertBeginning(int *arr, int *size);
void insertEnd(int *arr, int *size);
void insert(int *arr, int *size);
void deleteBeginning(int *arr, int *size);
void deleteEnd(int *arr, int *size);
void delete(int *arr, int *size);
void linearSearch(int const *arr, int size);
void binearySearch(int *arr, int size);
int isSorted(int *arr, int size);

int main(int argc, char const *argv[])
{
    int arr[MAX], size = 0, sorted = 0;
    int ch;
    int linesize = strlen("7. Delete element at the given index");

    while (1) // O(~)
    {
        printf(BOLD "\nMAIN MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1.  Display list (Traversal)\n");
        printf("2.  Insert element at the beginning\n");
        printf("3.  Insert element at the end\n");
        printf("4.  Insert element at a given index\n");
        printf("5.  Delete element from beginning\n");
        printf("6.  Delete element from the end\n");
        printf("7.  Delete element at the given index\n");
        printf("8.  Search (using linear search)\n");
        printf("9.  Search (using binary search)\n");
        printf("10. Check array sort status\n");
        printf("11. Sort (Radix - 1887)\n");
        printf("12. Sort (Bubble - 1956)\n");

        drawLine(linesize, NORMAL);
        printf("\nEnter choice [0 to exit]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            printf(BLUE BOLD "\nbye!\n\n" RESET);
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
        case 9:
            binearySearch(arr, size);
            break;
        case 10:
            if (size == 0)
                messageBox("Array empty!", ERROR);
            else
                isSorted(arr, size) == 1 ? messageBox("Array is sorted!", INFO) : messageBox("Array is unsorted", ERROR);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }
    }
    return 0;
}

void drawLine(int n, int type) // O(n)
{
    for (int i = 1; i <= n; i++)
    {
        if (type == INFO)
            printf(GREEN BOLD "-" OFF RESET);
        else if (type == ERROR)
            printf(RED BOLD "-" OFF RESET);
        else
            printf("-");
    }
}

void messageBox(char *message, int type) // O(1)
{
    printf("\n");
    drawLine(strlen(message), type);
    if (type == INFO)
        printf(GREEN BOLD "\n%s\n" OFF RESET, message);
    else if (type == ERROR)
        printf(RED BOLD "\n%s\n" OFF RESET, message);
    else
        printf("\n%s\n", message);
    drawLine(strlen(message), type);
    printf("\n");
}

void display(int const *arr, int size) // O(n)
{
    if (size == 0)
    {
        messageBox("Array empty!", ERROR);
        return;
    }

    printf("\nArray Content:\n");
    drawLine(strlen("Array Content:"), NORMAL);
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    drawLine(strlen("Array Content:"), NORMAL);
    printf("\n\n");
}

void insertBeginning(int *arr, int *size) // O(n)
{
    if (*size >= MAX)
    {
        messageBox("Array full!", ERROR);
        return;
    }

    for (int i = *size; i > 0; i--)
        arr[i] = arr[i - 1];

    printf("Enter a value: ");
    scanf("%d", &arr[0]);

    (*size)++;

    messageBox("Value inserted!", INFO);
}

void insertEnd(int *arr, int *size) // O(1)
{
    if (*size >= MAX)
    {
        messageBox("Array full!", ERROR);
        return;
    }

    printf("Enter a value: ");
    scanf("%d", &arr[*size]);

    (*size)++;

    messageBox("Value inserted!", INFO);
}

void insert(int *arr, int *size) // O(n)
{
    int index;
    if (*size >= MAX)
    {
        messageBox("Array full!", ERROR);
        return;
    }

    printf("Enter index: ");
    scanf("%d", &index);

    if (index > *size || index < 0)
    {
        messageBox("Not a valid index!", ERROR);
        return;
    }

    for (int i = *size; i > index; i--)
        arr[i] = arr[i - 1];

    printf("Enter a value: ");
    scanf("%d", &arr[index]);

    (*size)++;

    messageBox("Value inserted!", INFO);
}

void deleteBeginning(int *arr, int *size) // O(n)
{
    if (*size == 0)
    {
        messageBox("Array empty!", ERROR);
        return;
    }

    for (int i = 0; i < *size - 1; i++)
        arr[i] = arr[i + 1];

    (*size)--;

    messageBox("Value removed!", INFO);
}

void deleteEnd(int *arr, int *size) // O(1)
{
    if (*size == 0)
    {
        messageBox("Array empty!", ERROR);
        return;
    }

    (*size)--;

    messageBox("Value removed!", INFO);
}

void delete(int *arr, int *size) // O(n)
{
    int index;

    if (*size == 0)
    {
        messageBox("Array empty!", ERROR);
        return;
    }

    printf("Enter index: ");
    scanf("%d", &index);

    if (index > *size || index < 0)
    {
        messageBox("Not a valid index!", ERROR);
        return;
    }

    for (int i = index; i < *size - 1; i++)
        arr[i] = arr[i + 1];

    (*size)--;

    messageBox("Value removed!", INFO);
}

void printSearchMessage(int index)
{
    if (index == -1)
        messageBox("Value not found!", ERROR);
    else
    {
        char *strIndex, message[50];
        strIndex = malloc(40); // To be resolved
        sprintf(strIndex, "%d", index);
        strcpy(message, "Value found at index ");
        messageBox(strcat(message, strIndex), INFO);
    }
}

void linearSearch(int const *arr, int size) // O(n)
{
    int key, index = -1;
    if (size == 0)
    {
        messageBox("Array empty!", ERROR);
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

    printSearchMessage(index);
}

void binearySearch(int *arr, int size) // O(log n)
{
    int key, low = 0, high = size - 1, mid, index = -1;

    if (size == 0)
    {
        messageBox("Array empty!", ERROR);
        return;
    }

    if(isSorted(arr, size) == 0)
    {
        // printf("%p", isSorted);
        messageBox("Array is not sorted!", ERROR);
        return;
    }

    printf("Enter the value to search: ");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            index = mid;
            break;
        }

        if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    printSearchMessage(index);
}

int isSorted(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}