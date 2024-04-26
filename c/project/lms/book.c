/*
This module belongs to LMS project
*/
#include <stdio.h>

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
    fp = fopen("lms.dat", "a");
    fprintf(fp, "%d,%s,%s,%s,%s,%d,%s,%f\n", book.id, book.title, book.author, book.edition, book.publication, book.pages, book.isbn, book.price);
    fclose(fp);
    printf("\nBook record saved!\n\n");    
}

void getbooks()
{
    BOOK book;
    FILE *fp;
    fp = fopen("lms.dat", "r");
    fscanf(fp, "%d,%s,%s,%s,%s,%d,%s,%f\n", &book.id, book.title, book.author, book.edition, book.publication, &book.pages, book.isbn, &book.price);
    printf("%d\t%s\t%s\t%s\t%s\t%d\t%s\t%f\n", book.id, book.title, book.author, book.edition, book.publication, book.pages, book.isbn, book.price);
    fclose(fp);
}

void getbook(int id)
{

}