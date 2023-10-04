#pragma once

#include <iostream>
using namespace std;


namespace MyLib
{
	void Test()
	{
		cout << "This is my first function in my library.\n";
	}


}



namespace MyInput
{
	int ReadNumber()
	{
		int Number;
		cout << "Enter a number: \n";
		cin >> Number;

		return Number;
	}
}