/*
This module belongs to LMS project
*/
#include <stdio.h>

#define FILENAME "book.dat"

typedef struct book
{
    int id;
    char title[50];
    char author[50];
    char edition[20];
    char publication[50];
    int pages;
    char isbn[14];
    float price;
} BOOK;

void newbook();
void getbooks();
void getbook(int id);

void bookmenu()
{
    int exit = 0;
    while (1)
    {
        int ch;
        printf("BOOK MENU\n");
        printline(15);
        printf("1. New Book\n");
        printf("2. Display All Books\n");
        printf("3. Display Book by Id\n");
        printf("4. Edit Book\n");
        printf("5. Delete Book\n");
        printline(15);
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit = 1;               //refactor this logic
            break;
        case 1:
            newbook();
            break;
        case 2:
            getbooks();
            break;
        default:
            printf("\n\nInvalid Option\n\n");
            break;
        }
        if (exit == 1)
            break;
    }
}

void newbook()
{
    BOOK book;
    FILE *fp;
    printf("Enter Id: ");
    scanf("%d%*c", &book.id);
    printf("Enter Title: ");
    scanf("%[^\n]%*c", book.title);
    printf("Enter Author: ");
    scanf("%[^\n]%*c", book.author);
    printf("Enter Edition: ");
    scanf("%[^\n]%*c", book.edition);
    printf("Enter Publication: ");
    scanf("%[^\n]", book.publication);
    printf("Enter Number of Pages: ");
    scanf("%d", &book.pages);
    printf("Enter ISBN: ");
    scanf("%s", book.isbn);
    printf("Enter Price: ");
    scanf("%f", &book.price);
    fp = fopen(FILENAME, "a");
    fprintf(fp, "%d,%s,%s,%s,%s,%d,%s,%f\n", book.id, book.title, book.author, book.edition, book.publication, book.pages, book.isbn, book.price);
    fclose(fp);
    printf("\nBook record saved!\n\n");
}

void getbooks()
{
    BOOK book;
    FILE *fp;
    fp = fopen(FILENAME, "r");
    printline(160);
    printf("%-10s%-30s%-30s%-20s%-30s%-10s%-20s%-10s\n", "Book Id", "Title", "Author", "Edition", "Publication", "Pages", "ISBN", "Price");
    printline(160);
    for (int i = 1; i <= 4; i++)
    {
        fscanf(fp, "%d,%[^,],%[^,],%[^,],%[^,],%d,%[^,],%f\n", &book.id, book.title, book.author, book.edition, book.publication, &book.pages, book.isbn, &book.price);
        printf("%-10d%-30s%-30s%-20s%-30s%-10d%-20s%-10.2f\n", book.id, book.title, book.author, book.edition, book.publication, book.pages, book.isbn, book.price);
    }
    printline(160);
    fclose(fp);
}

void getbook(int id)
{
}