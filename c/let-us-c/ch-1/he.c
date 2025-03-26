#include<stdio.h>
int main (void)
{
    int l, b perimeter, area_rect;
    float area_circle,circumference, rad;
    float pi = 3.14;
    printf("Enter length:\n");
    scanf("%d",&l);
    printf("Enter breadth:\n ");
    scanf("%d",&b);
    printf("Enter radius:\n");
    scanf("%f",&rad);
     
    area_rect = l * b;
    perimeter = 2 * (l + b);
    area_circle = pi *rad * rad;
    circumference = 2 * pi * rad;

    printf("\n the area of rectangle id %d.", area_rect);
    printf("\n The perimeter of rectangle is %d.", perimeter );
    printf("\n The area of circle is %f.", area_circle);
    printf("\n The circumference is %f.", circumference);
    return 0;

}