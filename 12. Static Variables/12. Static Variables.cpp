#include <iostream>

using namespace std;

void function()
{
    static int number = 1;
    cout << number << endl;

    number++;
}

int main()
{
    function();
    function();
    function();
}

