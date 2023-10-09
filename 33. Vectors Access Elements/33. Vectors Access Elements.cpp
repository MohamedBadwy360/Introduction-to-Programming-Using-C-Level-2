#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num{ 1, 2, 3, 4, 5 };

    cout << "Using .at() " << endl;
    cout << "Element at index 0: " << num.at(0) << endl;
    cout << "Element at index 2: " << num.at(2) << endl;

    cout << "Using [] " << endl;
    cout << "Element at index 0: " << num[0] << endl;
    cout << "Element at index 2: " << num[2] << endl;

    return 0;
}

