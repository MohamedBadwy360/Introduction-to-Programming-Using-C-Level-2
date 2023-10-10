#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char x, y;

    x = toupper('x');
    y = tolower('Y');

    cout << "Converting x to X: " << x << endl;
    cout << "Converting Y to y: " << y << endl;

    // Upper case (A to Z)
    // return zero if false and non zero if yes
    cout << "isupper('A'): " << isupper('A') << endl;

    // lower case (a to z)
    // return zero if false and non zero if yes
    cout << "islower('A'): " << islower('a') << endl;

    // Digits (0 to 9)
    // returns zero if not, and non zero of yes
    cout << "isdigit(9): " << isdigit('9') << endl;

    // punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    // returns zero if not, and non zero of yes
    cout << "ispunct('!'): " << ispunct('!') << endl;

    return 0;
}
