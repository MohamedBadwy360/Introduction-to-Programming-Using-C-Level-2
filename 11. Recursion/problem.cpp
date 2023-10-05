#include <iostream>

using namespace std;

void print_numbers(int n, int m)
{
    if (m >= n)
    {
        cout << m << endl;
        print_numbers(n, m - 1);
    }
}

int main()
{
    print_numbers(1, 10);

    return 0;
}