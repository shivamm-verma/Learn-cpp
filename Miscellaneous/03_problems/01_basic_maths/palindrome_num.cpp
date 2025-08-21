#include <iostream>
using namespace std;

int main()
{
    int num = 1445441, revNum = 0;
    int cpy_num = num;

    while (cpy_num != 0)
    {
        revNum = (revNum * 10) + (cpy_num % 10);
        cpy_num /= 10;
    }
    if (num == revNum)
        cout << true << endl;
    else
        cout << false << endl;

    return 0;
}