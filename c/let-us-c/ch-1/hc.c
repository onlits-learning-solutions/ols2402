#include<stdio.h>
int main (void)
{
    int english, hindi, math, science, social_sc, agg_marks, percentage;
    printf("Enter the marks of student in five subject: \n");
    scanf("%d %d %d %d %d ", &english, &hindi, &math, &science, &social_sc);
    
    agg_marks = english + hindi + math + science + social_sc;
    percentage = (agg_marks / 500)* 100;

     printf("\n The aggregate marks is %d.",agg_marks);
     printf("\n The percentage is %d.", percentage);
     return 0;

}