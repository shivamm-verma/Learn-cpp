#include <iostream>
using namespace std;

int sumOfFirstN(int N, int ans = 0)
{
    if (N == 0)
    {
        return ans;
    }
    // cout << ans << endl; // check purposes only
    sumOfFirstN(N - 1, ans + N);
}


int main()
{
    // cout << sumOfFirstN(5) << endl;
    // cout << sumOfFirstN(2) << endl;

    
}