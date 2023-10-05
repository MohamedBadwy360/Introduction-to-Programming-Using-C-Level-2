#include <iostream>

using namespace std;

int read_number()
{
	int number;
	cout << "Enter a number: \n";
	cin >> number;

	while (cin.fail())
	{
		// user didn't input a number 
		cin.clear();		// clear input 

		// ignore all input line 
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');			

		cout << "Invalid Number. Enter a valid number: \n";
		cin >> number;
	}

	return number;
}

int main()
{

	cout << "Your number is: " << read_number();
	return 0;
}