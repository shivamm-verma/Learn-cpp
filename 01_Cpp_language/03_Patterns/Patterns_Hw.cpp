#include <iostream>
using namespace std;

int main()
{
    // hw
    // int num1;
    // cout << "Enter a num: ";
    // cin >> num1;
    // int i = num1;
    // while (i>0)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i = i-1;
    // }

    // int num2;
    // cout << "Enter a num: ";
    // cin >> num2;
    // int i = 1;
    // while (i <= num2)
    // {
    //     // print space
    //     int space = num2 - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }

    //     // print nums
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout<<i;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // 1111
    //  222
    //   33
    //    1
    int num3;
    cout << "Enter a num: ";
    cin >> num3;
    int i = 1;
    while (i <= num3)
    {
        // print spaces
        int space = i - 1;
        while (space != 0)
        {
            cout << " ";
            space -= 1;
        }
        // printing elems
        int j = num3;
        int count=j;
        while (j >0)
        {
            cout << i;
            j -= 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}