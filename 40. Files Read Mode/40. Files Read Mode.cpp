#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void print_file_content(string filename)
{
	fstream file;
	string line;

	file.open(filename, ios::in);

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}

		file.close();
	}
}

int main()
{
	print_file_content("file.txt");

	return 0;
}
