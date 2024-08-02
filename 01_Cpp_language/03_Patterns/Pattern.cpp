#include <iostream>
using namespace std;

int main()
{
    // * * *
    // * * *
    // * * *
    int num;
    cout << "Enter number of rows: ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << "* ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    // 1 1 1
    // 2 2 2
    // 3 3 3
    int num2;
    cout << "Enter a num: ";
    cin >> num2;
    int i = 1;
    // i goes row-wise
    while (i <= num2)
    {
        int j = 1;
        // j goes column-wise
        while (j <= num2)
        {
            cout << i << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}