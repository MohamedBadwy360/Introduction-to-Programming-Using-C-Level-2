#include <iostream>
#include <vector>

using namespace std;

struct st_employee
{
    string first_name = "";
    string last_name = "";
    short age = 0;
};

void read_vector_of_structure(vector <st_employee> &employees)
{
    char again = 'Y';
    st_employee employee;
    
    while(again == 'Y' || again == 'y')
    {
        cout << "Enter Employee First Name: ";
        cin >> employee.first_name;
        cout << "Enter Employee Last Name: ";
        cin >> employee.last_name;
        cout << "Enter Employee Age: ";
        cin >> employee.age;

        employees.push_back(employee);

        cout << "Do you need to enter another employee data [Y/N]? ";
        cin >> again;
    }
}

void print_vector_of_structure(vector <st_employee> &employees)
{
    cout << "\n\n Employees Data: \n\n";
    for (st_employee &employee : employees)
    {
        cout << "First name: " << employee.first_name << endl;
        cout << "Last name : " << employee.last_name <<endl;
        cout << "Age       : " << employee.age << endl << endl; 
    }
}

int main()
{
    vector <st_employee> employees;
    read_vector_of_structure(employees);
    print_vector_of_structure(employees);

    return 0;
}