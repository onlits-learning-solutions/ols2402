#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct census // 40 B
{
    char name[20];   // 20 B
    long population; // 8 B
    float literacy;  // 4 B
} CENSUS;

void read(CENSUS *cen2011);
void sorta(CENSUS *cen2011);
void sortl(CENSUS *cen2011);
void sortp(CENSUS *cen2011);
void display(CENSUS *cen2011);
void printline(int width);

int main(void)
{
    CENSUS cen2011[MAX]; // 200 B
    printf("EXERCISE 10.12\n");
    printf("CENSUS PROGARM\n\n");
    printf("Input details of %d cities below:\n", MAX);
    read(cen2011);
    printf("\nList of cities (unsorted):\n");
    display(cen2011);
    printf("\nList of cities (in alphabetical order):\n");
    sorta(cen2011);
    display(cen2011);
    printf("\nList of cities (in order of literacy level):\n");
    sortl(cen2011);
    display(cen2011);
    printf("\nList of cities (in order of population):\n");
    sortp(cen2011);
    display(cen2011);
    return 0;
}

void read(CENSUS *cen2011)
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d.\n", i + 1);
        printf("Name: ");
        scanf("%[^\n]", cen2011->name);
        printf("Population: ");
        scanf("%ld", &cen2011->population);
        printf("Literacy Level: ");
        scanf("%f%*c", &cen2011->literacy);
        cen2011++;
    }
    printf("\nreading completed!\n\n");
}

void sorta(CENSUS *cen2011)
{
    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (strcmp(cen2011[i].name, cen2011[j].name) > 0)
            {
                CENSUS temp = cen2011[i];
                cen2011[i] = cen2011[j];
                cen2011[j] = temp;
            }
        }
    }
}

void sortl(CENSUS *cen2011)
{
    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (cen2011[i].literacy < cen2011[j].literacy)
            {
                CENSUS temp = cen2011[i];
                cen2011[i] = cen2011[j];
                cen2011[j] = temp;
            }
        }
    }
}

void sortp(CENSUS *cen2011)
{
    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (cen2011[i].population < cen2011[j].population)
            {
                CENSUS temp = cen2011[i];
                cen2011[i] = cen2011[j];
                cen2011[j] = temp;
            }
        }
    }
}

void display(CENSUS *cen2011)
{
    int const TABLE_WIDTH = 55;
    printline(TABLE_WIDTH);
    printf("%-20s%15s%20s\n", "Name", "Population", "Literacy Level");
    printline(TABLE_WIDTH);
    for (int i = 0; i < MAX; i++)
    {
        printf("%-20s%15ld%20.2f\n", cen2011->name, cen2011->population, cen2011->literacy);
        cen2011++;
    }
    printline(TABLE_WIDTH);
}

void printline(int width)
{
    for (int i = 1; i <= width; i++)
    {
        printf("-");
    }
    printf("\n");
}