#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[10000];

    for (int i = 0; i < 10000; i++)
    {
        a[i] = i;
    }
    cout << "Array initialized successfully." << endl;
    cout << "a[6894]: " << a[6894] << endl;

    printArray(a, 10000);

    cout << sizeof(a)/sizeof(a[0]) << endl;
}