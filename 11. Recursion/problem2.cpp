#include <iostream>

using namespace std;

int power(int n, int m)
{
    if (m > 1)
    {
        n *= power(n, m - 1);
    }

    return n;
}

int main()
{
    int n = 2, m = 5;
    int number = power(n, m);
    cout << number << endl;

    return 0;
}