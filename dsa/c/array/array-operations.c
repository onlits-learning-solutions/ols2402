#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

#define MAX 1000000

void insertMenu(int *arr, int *size);
void deleteMenu(int *arr, int *size);
void searchMenu(int *arr, int size);
void sortMenu(int *arr, int size);

void drawLine(int n, int type);
void messageBox(char *message, int type);
void swap(int *a, int *b);
void seed(int *arr, int *size);
void display(int const *arr, int size);

void insertBeginning(int *arr, int *size);
void insertEnd(int *arr, int *size);
void insert(int *arr, int *size);

void deleteBeginning(int *arr, int *size);
void deleteEnd(int *arr, int *size);
void delete(int *arr, int *size);
void deleteAll(int *arr, int *size);

void linearSearch(int const *arr, int size);
void binearySearch(int *arr, int size);

int isSorted(int *arr, int size);
void bubbleSort(int *arr, int size);
void selectionSort(int *arr, int size);

int main(int argc, char const *argv[])
{
    int arr[MAX], size = 0;
    int ch;
    int linesize = strlen("1.  Display list (Traversal)");

    while (1) // Cannot determine complexity as this process does not comply
    {         // standard algorithm definition
        printf(BOLD "\nMAIN MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1. Display list (Traversal)\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Sort\n");
        printf("6. Check sort status\n");
        printf("7. Seed Array\n");
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
            insertMenu(arr, &size);
            break;
        case 3:
            deleteMenu(arr, &size);
            break;
        case 4:
            searchMenu(arr, size);
            break;
        case 5:
            sortMenu(arr, size);
            break;
        case 6:
            isSorted(arr, size);
            break;
        case 7:
            seed(arr, &size);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }
    }
    return 0;
}

void insertMenu(int *arr, int *size)
{
    int ch, exit = 0;
    int linesize = strlen("3.  Insert at a specific index");
    while (1)
    {
        printf(BOLD "\nINSERT MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a specific index\n");
        drawLine(linesize, NORMAL);
        printf("\nEnter choice [0 for MAIN MENU]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit = 1;
            break;
        case 1:
            insertBeginning(arr, size);
            break;
        case 2:
            insertEnd(arr, size);
            break;
        case 3:
            insert(arr, size);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }

        if (exit == 1)
            break;
    }
}

void deleteMenu(int *arr, int *size)
{
    int ch, exit = 0;
    int linesize = strlen("3.  Delete from a specific index");
    while (1)
    {
        printf(BOLD "\nDELETE MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1. Delete from the beginning\n");
        printf("2. Delete from the end\n");
        printf("3. Delete from a specific index\n");
        printf("4. Delete All\n");
        drawLine(linesize, NORMAL);
        printf("\nEnter choice [0 for MAIN MENU]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit = 1;
            break;
        case 1:
            deleteBeginning(arr, size);
            break;
        case 2:
            deleteEnd(arr, size);
            break;
        case 3:
            delete (arr, size);
            break;
        case 4:
            deleteAll(arr, size);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }

        if (exit == 1)
            break;
    }
}

void searchMenu(int *arr, int size)
{
    int ch, exit = 0;
    int linesize = strlen("Enter choice [0 for MAIN MENU]: ");
    while (1)
    {
        printf(BOLD "\nSEARCH MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1. Linear Search\n");
        printf("2. Binary Search\n");
        drawLine(linesize, NORMAL);
        printf("\nEnter choice [0 for MAIN MENU]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit = 1;
            break;
        case 1:
            linearSearch(arr, size);
            break;
        case 2:
            binearySearch(arr, size);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }

        if (exit == 1)
            break;
    }
}

void sortMenu(int *arr, int size)
{
    int ch, exit = 0;
    int linesize = strlen("3.  Delete from a specific index");
    while (1)
    {
        printf(BOLD "\nSORT MENU\n" OFF);
        drawLine(linesize, NORMAL);
        printf("\n1. Radix Sort - 1887\n");
        printf("2. Bubble Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Insertion Sort\n");
        drawLine(linesize, NORMAL);
        printf("\nEnter choice [0 for MAIN MENU]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit = 1;
            break;
        case 1:
            messageBox("Under Construction...", ERROR);
            break;
        case 2:
            bubbleSort(arr, size);
            break;
        case 3:
            selectionSort(arr, size);
            break;
        default:
            messageBox("Invalid Option!", ERROR);
            break;
        }

        if (exit == 1)
            break;
    }
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

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void seed(int *arr, int *size)
{
    int limit;
    printf("How many values to generate? ");
    scanf("%d", &limit);
    srand(time(NULL));
    for (int i = 0; i < limit; i++)
        arr[i] = rand();

    *size = limit;

    messageBox("Seeding done!", INFO);
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

void deleteAll(int *arr, int *size)
{
    if (*size == 0)
    {
        messageBox("Array empty!", ERROR);
        return;
    }

    *size = 0;

    messageBox("All values removed!", INFO);
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

    if (!isSorted(arr, size))
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

int isSorted(int *arr, int size) // O(n)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}

void bubbleSort(int *arr, int size)
{
    if (!size)
    {
        messageBox("Array empty!", ERROR);
        return;
    }

    if (isSorted(arr, size))
    {
        messageBox("Array already sorted!", INFO);
        return;
    }

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
    messageBox("Array sorted!", INFO);
}

void selectionSort(int *arr, int size)
{
    if (!size)
    {
        messageBox("Array empty!", ERROR);
        return;
    }

    if (isSorted(arr, size))
    {
        messageBox("Array already sorted!", INFO);
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
    messageBox("Array sorted!", INFO);
}