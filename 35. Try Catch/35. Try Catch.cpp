#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num{ 1, 2, 3, 4, 5 };

    try
    {
        cout << num.at(6);
    }
    catch (...)
    {
        cout << "Out of boundary.\n";
    }
    

    return 0;
}

