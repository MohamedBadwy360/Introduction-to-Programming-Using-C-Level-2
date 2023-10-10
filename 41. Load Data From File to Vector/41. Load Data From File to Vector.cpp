#include <iostream>
#include <vector>
#include <string>
#include <fstream>

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

int main()
{
    vector <string> v_file_content;

    load_data_from_file_to_vector("file.txt", v_file_content);

    for (string& line : v_file_content)
    {
        cout << line << endl;
    }

    return 0;
}
