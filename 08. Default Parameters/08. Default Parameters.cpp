#include <iostream>

using namespace std;

int my_sum(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int main()
{
    cout << "Sum = " << my_sum(10, 20) << endl;
    cout << "Sum = " << my_sum(10, 20, 30) << endl;
    cout << "Sum = " << my_sum(10, 20, 30, 40) << endl;

    return 0;
}
