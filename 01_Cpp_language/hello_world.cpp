#include <iostream>
using namespace std;

int main()
{
    // Data types
    cout << "Hello world" << endl;
    // endl is an empty line

    bool bl = false;
    cout << bl << endl;
    cout << !(bl) << endl;

    string first_string = "well my name is shivam verma.";
    cout << first_string << endl;

    int size = sizeof(first_string);
    cout << "The size of string is: " << size << endl;

    // Typecasting
    char ch = 98;
    cout << ch << endl; // prints 'b'

    int a = 'd';
    cout << a << endl; // prints 100

    unsigned int b = 345; // only for positive number
    cout << b << endl;

    // Operators
    float num1 = 2.0 / 5;
    cout << num1 << endl;

    // Relational operator
    int num2 = 2;
    int num3 = -2;
    bool bool1 = num2 == num3;
    cout << bool1 << endl; // false
    bool bool2 = num2 >= num3;
    cout << bool2 << endl; // true

    // Logical Operator
    int num4 = 42;
    cout << !num4 << endl; // prints 0

    
}