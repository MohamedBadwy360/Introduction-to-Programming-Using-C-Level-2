#include <iostream>

using namespace std;

struct st_employee
{
    string name;
    short age;
};

int main()
{
    st_employee employee, * ptr;

    employee.name = "Mohamed Badwy";
    employee.age = 23;

    cout << employee.name << endl;
    cout << employee.age << endl;

    cout << "Using Pionters: \n";

    ptr = &employee;

    cout << ptr->name << endl;
    cout << ptr->age << endl;

    return 0;
}
