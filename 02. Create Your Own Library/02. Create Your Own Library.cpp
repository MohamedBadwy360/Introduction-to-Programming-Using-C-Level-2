#include <iostream>
#include "MyLib.h"

using namespace std;
using namespace MyLib;

int main()
{
	Test();

	int Number = MyInput::ReadNumber();
	cout << "Number is: " << Number;


	return 0;
}
