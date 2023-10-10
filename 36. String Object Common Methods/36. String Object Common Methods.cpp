#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "My name is Mohammed Badwy.";

    // print the length of string 
    cout << s.length() << endl;

    // returns the letter at position 3
    cout << s.at(3) << endl;

    // add "I Love Programming." to the end of string
    s.append(" I love programming.");
    cout << s << endl;

    // insert " Elsaid" at position 24
    s.insert(25, " Elsaid");
    cout << s << endl;

    // prints all the next 8 letters from the position 16
    cout << s.substr(16, 8) << endl;

    // Add one character to the end of string
    s.push_back('X');
    cout << s << endl;

    // remove one character from the end of string 
    s.pop_back();
    cout << s << endl;

    // Find Mohamed in the string
    cout << s.find("Mohammed") << endl;

    // find mohamed in the string
    cout << s.find("mohammed") << endl;

    if (s.find("mohammed") == s.npos)
    {
        cout << "not found.\n";
    }

    s.clear();
    cout << s << endl;

    return 0;
}
