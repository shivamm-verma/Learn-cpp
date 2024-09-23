#include <iostream>
using namespace std;
// use % and / to div digits out of a number
int main()
{
    int n = 234;
    while (n != 0)
    {
        cout << (n % 10) << endl;
        n /= 10;
    }
}

// leetcode 1281
// #include <iostream>
// using namespace std;
// // use % and / to div digits out of a number
// int main()
// {
//     int n = 234, prod = 1, sum = 0;
//     while (n != 0)
//     {
//         cout << (n % 10) << endl; // 4 then 3 then 2
//         prod *= (n % 10);
//         sum += (n % 10);
//         n /= 10;
//     }
//     cout << "prod: " << prod << " & sum: " << sum << endl;
//     cout << "diff b/w them: " << (prod - sum) << endl;
// }