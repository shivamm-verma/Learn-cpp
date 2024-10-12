#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // working well in online compiler
    int n;
    cout << "Give a num: ";
    cin >> n;
    int i = 0, ans = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1; // n/=2
        i++;
    }
    cout << "Answer is: " << ans << endl;
}
