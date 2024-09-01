#include <iostream>
using namespace std;

int main()
{
    //  1 2 3
    //  1 2 3
    //  1 2 3
    // int num1;
    // cout << "Give a number: ";
    // cin >> num1;
    // int i = 1;
    // while (i <= num1)
    // {
    //     int j = 1;
    //     while (j <= num1)
    //     {
    //         cout << j << " ";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // reverse of above
    // 3 2 1
    // 3 2 1
    // 3 2 1
    // Use: n-j+1 formula
    // int num2;
    // cout << "Give a number: ";
    // cin >> num2;
    // int i = 1;
    // while (i <= num2)
    // {
    //     int j = 1;
    //     while (j <= num2)
    //     {
    //         cout << (num2 - j + 1) << " ";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    //  1 2 3
    //  4 5 6
    //  7 8 9
    // int num3, count = 1, i = 1;
    // cout << "Give a number: ";
    // cin >> num3;
    // while (i <= num3)
    // {
    //     int j = 1;
    //     while (j <= num3)
    //     {
    //         cout << count << " ";
    //         j += 1;
    //         count += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // *
    // **
    // ***
    // ****
    // int num4;
    // int i = 1;
    // cout << "Give a number: ";
    // cin >> num4;
    // while (i <= num4)
    // {
    //     int j = 1;
    //     while (j <= i) // depending on i, not in num4
    //     {
    //         cout << "* ";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // 1
    // 22
    // 333
    // 4444
    // int num5;
    // cout << "Give a number: ";
    // cin >> num5;
    // int i = 1;
    // while (i <= num5)
    // {
    //     int j = 1;
    //     while (j <= i) // depending on i, not in num4
    //     {
    //         cout << i;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // int num6, count = 1;
    // cout << "Give a num: ";
    // cin >> num6;
    // int i = 1;
    // while (i <= num6)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         j += 1;
    //         count += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // method 1
    // int num7;
    // cout << "Give a num: ";
    // cin >> num7;
    // int i = 1;
    // while (i <= num7)
    // {
    //     int j = 1;
    //     int value = i;
    //     while (j <= i)
    //     {
    //         cout << value << " ";
    //         value += 1;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // method 2
    // idk
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = i;
    //     while (j < 2 * i)
    //     {
    //         cout << j << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // me own way
    // int num8, i = 1;
    // cout << "give a num: ";
    // cin >> num8;
    // while (i <= num8)
    // {
    //     int j = i;
    //     while (j >= 1)
    //     {
    //         cout << j << " ";
    //         j -= 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }
    // Other method: put j=1 & cout << i-j+1<<" "; (not n-j+1 working)

    // A A A
    // B B B
    // C C C
    // int num9, i = 1;
    // cout << "give a num: ";
    // cin >> num9;
    // while (i <= num9)
    // {
    //     int j = 1;
    //     char charac = 'A' + i - 1;
    //     while (j <= num9)
    //     // col dependent on num9, not on i
    //     {
    //         cout << charac << " ";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // j dependent on i => right angled triangle [pattern]
    // j dependent on n => Squared [pattern]

    // A B C
    // A B C
    // A B C
    // int num10, i = 1;
    // cout << "give a num: ";
    // cin >> num10;
    // while (i <= num10)
    // {
    //     int j = 1;
    //     while (j <= num10)
    //     {
    //         char chc = 'A' + j - 1;
    //         cout << chc << " ";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // A B C
    // D E F
    // G H I
    // int num11, i = 1;
    // cout << "give a num: ";
    // cin >> num11;
    // while (i <= num11)
    // {
    //     char chca = 'A' + i - 1;
    //     int j = 1;
    //     while (j <= num11)
    //     {
    //         cout << chca << " ";
    //         chca + 1;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // A
    // BB
    // CCC
    // int num12, i = 1;
    // cout << "Enter a num: ";
    // cin >> num12;
    // while (i <= num12)
    // {
    //     int j = 1;
    //     char ch = 'A' + i - 1;
    //     while (j <= i)
    //     {
    //         cout << ch;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // A
    // BC
    // DEF
    // int num13, i = 1;
    // cout << "Enter a num: ";
    // cin >> num13;
    // char ch = 'A' + i - 1;
    // while (i <= num13)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << ch;
    //         ch += 1;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }
    // A
    // BC
    // CDE
    // DEFG
    // int num14, i = 1;
    // cout << "Enter a num: ";
    // cin >> num14;
    // while (i <= num14)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch;
    //         ch += 1;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // D
    // CD
    // BCD
    // ABCD
    // int num15, row = 1;
    // cout << "Enter a num: ";
    // cin >> num15;
    // while (row <= num15)
    // {
    //     char start = 'A' + num15 - row;
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << start;
    //         start += 1;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    //    *
    //   **
    //  ***
    // ****
}