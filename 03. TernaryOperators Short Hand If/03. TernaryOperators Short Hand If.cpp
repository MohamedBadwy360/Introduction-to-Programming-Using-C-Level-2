#include <iostream>
#include "inputs.h"

using namespace std;

int main()
{
	int mark = input::read_positive_number("Enter Your Mark: ");
	string result = (mark >= 50) ? "Pass" : "Fail";

	cout << result << endl;

	return 0;
}