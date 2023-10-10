#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void load_data_from_file_to_vector(string file_name, vector <string>& v_file_content)
{
    fstream file;

    file.open(file_name, ios::in);

    if (file.is_open())
    {
        string line;

        while (getline(file, line))
        {
            v_file_content.push_back(line);
        }

        file.close();
    }
}

void save_vector_to_file(string file_name, vector <string>& v_file_content)
{
    fstream file;

    file.open(file_name, ios::out); // write mode

    if (file.is_open())
    {
        for (string& line : v_file_content)
        {
            if (line != "")
            {
                file << line << endl;
            }
        }

        file.close();
    }
}

void print_file_content(string filename)
{
    fstream file;

    file.open(filename, ios::in);

    if (file.is_open())
    {
        string line;

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
}

void delete_record_from_file(string file_name, string record)
{
    vector <string> v_file_content;
    load_data_from_file_to_vector(file_name, v_file_content);

    for (string& line : v_file_content)
    {
        if (line == record)
        {
            line = "";
        }
    }

    save_vector_to_file(file_name, v_file_content);
}

int main()
{
    print_file_content("file.txt");

    delete_record_from_file("file.txt", "Ali");

    cout << "=========\n";

    print_file_content("file.txt");

    return 0;
}
