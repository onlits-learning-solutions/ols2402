#include<stdio.h>
int main(void)
{
    float m, km, feet, inches, cm;
    printf("Enter distance in km: ");
    scanf("%f",&km);

    m = km * 1000;
    feet = km * 3280.8339;
    inches = km * 39370.0787;
    cm = km * 100000;

    printf("\n distance in meter is %f.", m);
    printf("\n distance in feet is %f.",feet);
    printf("\n distance in inches is %f.", inches);
    printf("\n distance in centi meter is %f.", cm);
    return 0;
}
