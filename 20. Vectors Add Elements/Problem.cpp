#include <iostream>
#include <vector>

using namespace std;

void read_vector_numbers(vector <int> &v_numbers)
{
    int number = 0;
    char number_again = 'Y';
    do 
    {
        cout << "Enter a number: \n";
        cin >> number;

        v_numbers.push_back(number);

        cout << "Do you want to enter another number [Y/N]? \n";
        cin >> number_again;
    }
    while (number_again == 'Y' | number_again == 'y');
}

void print_vector_numebr(vector <int> v_numbers)
{
    cout << "-------------------- \n";
    cout << "Vector Numbers: \n";

    for (int &number : v_numbers)
    {
        cout << number << endl;
    }
}

int main()
{
    vector <int> v_numbers;
    read_vector_numbers(v_numbers);
    print_vector_numebr(v_numbers);

    return 0;
}