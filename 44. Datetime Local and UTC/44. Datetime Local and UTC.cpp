#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t t = time(0);		// get time now

	char* dt = ctime(&t);	// convert it to string form
	cout << "Local Date and Time: " << dt << endl;

	tm* gmtm = gmtime(&t);	// converting t to tm struct for UTC Date/Time
	dt = asctime(gmtm); 
	cout << "UTC Date and Time: " << dt << endl;

	return 0;
}
