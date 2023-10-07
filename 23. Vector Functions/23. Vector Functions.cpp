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

    cout << "First Element: " << v_numbers.front() << endl;
    cout << "Last Element : " << v_numbers.back() << endl;

    // return the number of elements present in the vector 
    cout << "Size         : " << v_numbers.size() << endl;

    // return the number of ovarall size of the vector
    cout << "Capacity     : " << v_numbers.capacity() << endl;

    // return 1 if empty and 0 if not empty
    cout << "Empty        : " << v_numbers.empty() << endl;

    // ======================================================

    cout << "======= After Empty =======\n";

    // clear all elements
    v_numbers.clear();
    // return the number of elements present in the vector 
    cout << "Size         : " << v_numbers.size() << endl;
    // return the number of ovarall size of the vector
    cout << "Capacity     : " << v_numbers.capacity() << endl;
    // return 1 if empty and 0 if not empty
    cout << "Empty        : " << v_numbers.empty() << endl;

    return 0;
}

