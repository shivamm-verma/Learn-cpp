#include <iostream>
using namespace std;

void printNames5Times(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Shivam, hey." << endl;
    printNames5Times(i + 1, n);
}

void printLinear1ToN(int V, int N)
{
    if (V > N)
    {
        return;
    }
    cout << V << endl;
    printLinear1ToN(V + 1, N);
}

void printFromNto1(int i, int N)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    printFromNto1(i - 1, N);
}

// BACKTRACKING
// writing after the function call
void BT1ToN(int i, int N)
{
    if (i < 1)
    {
        return;
    }
    BT1ToN(i - 1, N);
    cout << i << endl;
}

void BtNto1(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    BtNto1(i + 1, n);
    cout << i << endl;
}

int main()
{
    // Running all the recursive functions here
    // printNames5Times(1, 5);
    // printLinear1ToN(100);
    // printFromNto1(10, 10);
    // BT1ToN(4,4);
    // BtNto1(4, 4);

}