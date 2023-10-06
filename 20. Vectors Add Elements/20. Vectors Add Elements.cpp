#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v_numbers;

    v_numbers.push_back(10);
    v_numbers.push_back(20);
    v_numbers.push_back(30);
    v_numbers.push_back(40);
    v_numbers.push_back(50);

    cout << "Vector Numbers: \n";

    for (int& number : v_numbers)
    {
        cout << number << endl;
    }

    return 0;
}

