#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("file.txt", ios::out | ios::app);

    if (file.is_open())     // check if it opened correctly
    {
        file << "My name is Mohamed.\n";

        file.close();
    }

    return 0;
}
