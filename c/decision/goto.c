#include <stdio.h>
int main(void){
    iterate:
    printf("Program started!\n");
    goto skip;
    printf("Program running!\n");
    skip:           //label
    printf("A line in this program has been skipped!\n");
    goto iterate;
    return 0;
}