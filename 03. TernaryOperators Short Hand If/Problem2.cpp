#include <iostream>
#include "inputs.h"

using namespace std;

int main()
{
    float number = input::read_number("Enter a number: ");
	string result = (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero";
	cout << result << endl;


    return 0;
}