#include <iostream>

using namespace std;

void swap(int* n1, int* n2)
{
    int temp = 0;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Before swaping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(&a, &b);

    cout << "After swaping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

