#include <iostream>
using namespace std;

int main()
{
    int num = 14567, count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    cout << "The number of digits:- " << count << endl;
    return 0;
}