#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    cout << "|---------|--------------------------------|---------|" << endl;
    cout << "|   Code  |              Name              |  Mark   |" << endl;
    cout << "|---------|--------------------------------|---------|" << endl;

    cout << "|" << setw(9) << "C123" << "|" << setw(32) << "Math1" << "|" << setw(9) << 99 << "|" << endl;
    cout << "|" << setw(9) << "C1256" << "|" << setw(32) << "Math2" << "|" << setw(9) << 98 << "|" << endl;

    cout << "|---------|--------------------------------|---------|" << endl;

    return 0;
}

