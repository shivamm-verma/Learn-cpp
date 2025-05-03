#include <iostream>
using namespace std;

// Creating a Fibonacci number func using Multiple Recursion

int Fibonacci(int num, int i, int j)
{
    while (num > 0)
    {
        // int temp = i+j;
        int temp = j + i;
        i = j;
        j = temp;
        Fibonacci(num-1,i,j);
        num--;
        if (num == 0) {
            return i;
        }
    }
}

int main()
{
    int ans = Fibonacci(5, 0, 1);
    cout << "Ans: " << ans << endl;
}