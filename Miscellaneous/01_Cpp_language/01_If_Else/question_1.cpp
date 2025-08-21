#include <iostream>
using namespace std;

// check if a char is upper case/lower cased
// (hint: using ASCII table)

int main()
{
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;

    if (ch >= 48 && ch <= 57)
    {
        cout << "It's a Number.";
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "It's a Upper-Case Character.";
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "It's a Lower-Case Character.";
    }
}