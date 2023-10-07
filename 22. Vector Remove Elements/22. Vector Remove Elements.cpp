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

    for (int& number : v_numbers)
    {
        cout << number << endl;
    }

    cout << "Stack Size = " << v_numbers.size() << endl;
    cout << "Is stack is empty? " << v_numbers.empty() << endl << endl;

    // remove the final element
    v_numbers.pop_back();
    v_numbers.pop_back();

    for (int& number : v_numbers)
    {
        cout << number << endl;
    }

    cout << "Stack Size = " << v_numbers.size() << endl;
    cout << "Is stack is empty? " << v_numbers.empty() << endl << endl;

    // remove all elements
    v_numbers.clear();

    for (int& number : v_numbers)
    {
        cout << number << endl;
    }

    cout << "Stack Size = " << v_numbers.size() << endl;
    cout << "Is stack is empty? " << v_numbers.empty() << endl;

    return 0;
}
