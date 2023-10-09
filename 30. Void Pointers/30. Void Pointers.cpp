#include <iostream>

using namespace std;

int main()
{
    void* ptr;
    
    int x = 10;

    ptr = &x;

    cout << &x << endl;
    cout << ptr << endl;

    // casting pointer to specific datatype to print it
    cout << *(static_cast<int*>(ptr)) << endl;

    float y = 10.5;
    ptr = &y;

    cout << &y << endl;
    cout << ptr << endl;

    cout << y << endl;
    cout << *(static_cast<float*>(ptr)) << endl;

    return 0;
}
