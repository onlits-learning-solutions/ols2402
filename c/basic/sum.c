#include <stdio.h>		//Preprocessor directive (File Inclusion)
int main(void)
{
	int a, b, c;				//Variable declaration
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	c = a + b;
	printf("The sum is %d.\n",c);
	return 0;
}

