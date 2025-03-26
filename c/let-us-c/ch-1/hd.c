#include<stdio.h>
int main (void)
{
    float f, c;
    printf("Enter fahrenhiet degree: ");
    scanf("%f ", &f);

    c = 5*(f-32)/9;
    
    printf("\n the centigrade degree is %f.", c);
    return 0;
}