#include<stdio.h>
int main(void)
{
    float sp, cp, profit;
    printf("\n Enter selling price: ");
    scanf("%f", &sp);
    printf("\n Enter profit: ");
    scanf("%f",&profit);
    cp = sp - profit;
    printf("\n the cost price is %f.",cp);
    return 0; 
}