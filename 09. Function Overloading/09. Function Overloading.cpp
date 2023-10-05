#include <iostream>

using namespace std;

int mysum(int a, int b)
{
    return a + b;
}

double mysum(double a, double b)
{
    return a + b;
}

int mysum(int a, int b, int c)
{
    return a + b + c;
}

int mysum(int a, int b, int c, int d)
{
    return a + b + c +d;
}


int main()
{
    cout << "Sum = " << mysum(10, 20) << endl;
    cout << "Sum = " << mysum(10.5, 20.3) << endl;
    cout << "Sum = " << mysum(10, 20, 30) << endl;
    cout << "Sum = " << mysum(10, 20, 40, 50) << endl;

    return 0;
}

