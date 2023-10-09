#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a;

    cout << "a value      : " << a << endl;
    cout << "a addres     : " << &a << endl;

    cout << "pointer value: " << ptr << endl;
    cout << "value of address that pointer is pointing to: " << *ptr << endl;

    *ptr = 20;
    cout << a << endl;
    cout << *ptr << endl;

    a = 30;
    cout << a << endl;
    cout << *ptr << endl;

    return 0;
}
