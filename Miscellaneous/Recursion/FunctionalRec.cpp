#include <iostream>
using namespace std;

void swappWithRec(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    swappWithRec(i + 1, arr, n);
}

bool checkStringPalind(int i, string &s, int n)
{
    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
        return false;
    return checkStringPalind(i + 1, s, n);
}

int main()
{
    // Swap an array using recursion
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int a[n];
    // for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        a[i] = i * 2;
    };

    cout << "Array before: \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    swappWithRec(0, a, n);
    cout << "\nArray After: \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << endl;

    // check if string is pallindrome or not using recursion
    // string s1 = "HELLO";
    // cout << s1[0] << " " << s1[s1.length() - 1] << endl;

    string check1 = "MADAM";
    string check2 = "HELLO";
    cout << checkStringPalind(0, check1, check1.length()) << endl;
    cout << checkStringPalind(0, check2, check2.length()) << endl;
}