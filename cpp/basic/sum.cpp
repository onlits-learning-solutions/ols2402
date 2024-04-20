#include <iostream>		//Preprocessor directive (File Inclusion)
using namespace std;
int main(void)
{
	int a, b, c;				//Variable declaration
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter another number: ";
	cin >> b;
	c = a + b;
	cout << "The sum is " << c << "." << endl;
	return 0;
}