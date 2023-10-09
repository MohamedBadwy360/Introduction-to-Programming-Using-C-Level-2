#include <iostream>

using namespace std;

int main()
{
    // declare int pointer
    int* ptr_x;

    // declare float pointer
    float* ptr_y;

    // dynamically allocate memory
    ptr_x = new int;
    ptr_y = new float;

    // assigning values to the memory
    *ptr_x = 10;
    *ptr_y = 20.5;

    cout << *ptr_x << endl;
    cout << *ptr_y << endl;

    // deallocate the memory
    delete ptr_x;
    delete ptr_y;

    return 0;
}
