#include <iostream>
#include <vector>

using namespace std;

struct st_employee
{
    string first_name = "";
    string last_name = "";
    int age = 0;
};

int main()
{
    vector <st_employee> employees;

    st_employee temp_employee;

    temp_employee.first_name = "Mohamed";
    temp_employee.last_name = "Badwy";
    temp_employee.age = 23;
    employees.push_back(temp_employee);

    temp_employee.first_name = "Elsaid";
    temp_employee.last_name = "Badwy";
    temp_employee.age = 29;
    employees.push_back(temp_employee);

    cout << "Employees Data: \n\n";

    for (st_employee& employee : employees)
    {
        cout << "First name: " << employee.first_name << endl;
        cout << "Last name : " << employee.last_name << endl;
        cout << "Age       : " << employee.age << endl << endl;
    }

    return 0;
}
