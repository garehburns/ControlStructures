// This demonstrates te basic control structures of C++

#include <iostream>
using namespace std;

int main()
{
	// ask the user for an integer
	int number = 0;
	cout << "Enter an integer: ";
	cin >> number;
	
	// output whether the number is positive, negative, or zero
	if (number > 0)
	{
		cout << "That number is positive.\n";
		
		// output a message `number` times
		for (int i = 0; i < number; i++)
		{
			cout << i << ". Hello, world!\n";
		}
	}
	else if (number < 0)
	{
		cout << "That number is negative.\n";
	}
	else
	{
		cout << "That number is zero.\n";
	}
}
