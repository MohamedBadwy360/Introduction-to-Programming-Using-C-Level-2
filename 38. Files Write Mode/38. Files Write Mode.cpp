#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("file.txt", ios::out);    // write mode

    if (file.is_open())
    {
        file << "My name is Mohamed Badwy.\n";
        file << "I love programming.\n";
        file << "I study c++.\n";

        file.close();
    }

    return 0;
}
