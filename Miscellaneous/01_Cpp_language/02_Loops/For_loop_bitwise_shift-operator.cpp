#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3;
    cout << "a&b: " << (a & b) << endl;
    cout << "a|b: " << (a | b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "~b: " << (~b) << endl;
    cout << "a^b: " << (a ^ b) << endl
         << endl;

    // Left shift Operator
    // (Multiple Number by 2^(shifting operand))
    cout << (3 << 1) << endl;  // 011 is 110 now, thats 6.
    cout << (3 << 2) << endl;  // 0011 is 1100 now, thats 12.
    cout << (21 << 2) << endl; // 21*(2*2) == 84

    // Right shift Operator
    // (Divide & Floor Number by 2^(shifting operand))
    cout << (31 >> 1) << endl; // 15
    cout << (21 >> 2) << endl; // 21/(2*2) == 5
    cout << endl;

    // Increment/Decrement
    int n = 7;
    cout << (n++) << endl;
    cout << (++n) << endl;
    cout << (--n) << endl;
    cout << (n--) << endl;
    cout << (n) << endl;
    cout << endl;

    // For loop
    // int num1;
    // cout << "Enter a num: ";
    // cin >> num1;
    // cout << "Couting till this number.\n";
    // for (int i = 1; i <= num1; i++)
    // {
    //     cout << i << endl;
    // }

    // Fibonacci series;
    // int p = 0, q = 1, nextNum;
    // int num2;
    // cout << "Upto which term Fibonacci series: ";
    // cin >> num2;
    // cout << "Fibonacci series: \n";
    // cout << p << ", " << q;
    // for (int i = 3; i <= num2; i++)
    // {
    //     nextNum = p + q;
    //     cout << ", " << nextNum;
    //     p = q;
    //     q = nextNum;
    // }
    // cout << "\n\n";

    // Check if prime or not
    // int num3;
    // cout << "Check number if Prime : ";
    // cin >> num3;
    // bool isPrime = 1;
    // for (int i = 2; i < num3; i++)
    // {
    //     if (num3 % i == 0)
    //     {
    //         // cout << "Not Prime" << endl;
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // switch (isPrime)
    // {
    // case 0:
    //     cout << "Not Prime\n";
    //     break;
    // case 1:
    //     cout << "Prime\n";
    //     break;
    // }

    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (i & 1)
        {
            continue;
        }
        i++;
    }
}