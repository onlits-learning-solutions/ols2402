#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

void readdate(struct date *d);
void displaydate(struct date *d);

int main(void)
{
    struct date d;
    printf("Enter a date (dd/mm/yyyy): ");
    readdate(&d);
    printf("The entered date is:\n");
    displaydate(&d);
    return 0;
}

void readdate(struct date *d)
{
    scanf("%d/%d/%d", &d->day, &d->month, &d->year);
}

void displaydate(struct date *d)
{
    printf("%02d/%02d/%d\n", d->day, d->month, d->year);
}