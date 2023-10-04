#include <iostream>
#include "inputs.h"

using namespace std;

int main()
{
	float number = input::read_number("Enter a number: ");
	string result = (number > 0) ? "Positive" : "Negative";
	cout << result << endl;

	return 0;
}