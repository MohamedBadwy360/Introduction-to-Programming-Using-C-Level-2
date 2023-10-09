#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter total numbers of students: ";
    cin >> num;

    float* ptr;

    // memory allocation of num number of floats
    ptr = new float[num];

    cout << "Enter students grade: \n";

    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "============\n";

    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 << " grade: " << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete[] ptr;

    return 0;
}
