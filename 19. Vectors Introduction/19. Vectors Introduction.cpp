#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // std::vector <Type> vector_name = {};
    vector <int> v_numbers = { 10, 20, 30, 40, 50 };

    for (int& number : v_numbers)
    {
        cout << number << " ";
    }

    return 0;
}

