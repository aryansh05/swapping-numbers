#include <iostream>
using namespace std;

void swap_numbers(int &x, int &y);

int  main()
{
int first_number;
int second_number;
	
	cout << "######################" << endl;
	cout << "Swapping Numbers" << endl;

	cout << "Enter your first number: " << endl;
	cin >> first_number;
	cout << "Enter your second number: " <<  endl;
	cin >> second_number;

	cout << "Before Swap: \n";
	cout << "First number: " << first_number << endl;
	cout << "Second number: " << second_number << endl;

swap_numbers(first_number,second_number);

	cout << "After Swap: \n";
	cout << "First number: " << first_number << endl;
	cout << "Second number: " << second_number << endl;

	return 0;
}
void swap_numbers(int &x, int &y)
{
int z = x;
x = y;
y = z;
}
