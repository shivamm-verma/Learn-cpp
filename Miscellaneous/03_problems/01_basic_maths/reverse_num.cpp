#include <iostream>
using namespace std;

int main()
{
    int num = 13445, rev_num = 0;
    int cpy_num = num;
    while (cpy_num != 0)
    {
        rev_num = (rev_num * 10) + (cpy_num % 10);
        cpy_num /= 10;
    }
    cout << "The reverse of the number is: " << rev_num << endl;

    return 0;
}