#include<stdio.h>
int main(void)
{
    float basic_salary, dallowance, rent_allowance,gross_salary;

    printf("Enter basic_salary: ");
    scanf("%f", &basic_salary );

    dallowance = 0.4 * basic_salary;
    rent_allowance = 0.2 * basic_salary;
    gross_salary = basic_salary + dallowance + rent_allowance;
    
    printf(" \n Basic salary is %f. ", basic_salary);
    printrf("\n dearallowancs is %f. ", dallowance);
    printf("\n Rent allowance is %f. ", rent_allowance);
    printf("\n Gross salary is %f. ", gross_salary);
    return 0;
}

