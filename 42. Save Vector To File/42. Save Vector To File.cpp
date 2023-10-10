#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

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

int main()
{
    vector <string> v_file_content{ "Mohamed", "Ahmed", "Ali", "Asmaa", "Elsaid" };
    save_vector_to_file("file.txt", v_file_content);

    return 0;
}
