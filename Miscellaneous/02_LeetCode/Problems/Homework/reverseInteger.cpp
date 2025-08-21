#include <iostream>
using namespace std;

int main()
{
    int n, rev_num = 0;
    cout << "give a num: ";
    cin >> n;
    while (n != 0)
    {
        // cout <<  (n %10);    // 6 -> 0 -> 4
        rev_num = (rev_num * 10) + (n % 10);
        n /= 10;
    }
    cout << rev_num;    
}