#include <iostream>
using namespace std;

int checkPalind(int num)
{
    int fnum = num, revNum = 0;
    // need to create new num
    while (fnum != 0)
    {
        revNum = (revNum * 10) + (fnum % 10);
        fnum /= 10;
    }
    if (num == revNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << checkPalind(151) << endl;
    cout << checkPalind(51415) << endl;
    cout << checkPalind(95980) << endl;
    cout << checkPalind(2002) << endl;
    return 0;
}