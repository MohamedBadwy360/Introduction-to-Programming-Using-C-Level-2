#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    cout << "a value    : " << a << endl;
    cout << "a address  : " << &a << endl;

    // pointer
    int* ptr = &a;
    // print a address
    cout << "ptr value  : " << ptr << endl;

    return 0;
}

