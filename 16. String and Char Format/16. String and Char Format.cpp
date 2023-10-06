#include <iostream>

using namespace std;

int main()
{
	char name[] = "Mohamed Badwy Elsaid";
	char school_name[] = "Elshaheed";

	printf("My name is %s. \n", name);
	printf("My school name is %s. \n", school_name);

	char c = 's';
	printf("Setting the width of c: %*c \n", 1, c);
	printf("Setting the width of c: %*c \n", 2, c);
	printf("Setting the width of c: %*c \n", 3, c);
	printf("Setting the width of c: %*c \n", 4, c);

	return 0;
}

