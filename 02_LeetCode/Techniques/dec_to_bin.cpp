#include <iostream>
using namespace std;

int bin(unsigned n)
{
    if (n > 1)
    {
        bin(n / 2); // recusrsive approach
    }
    cout << n % 2;
}
int main()
{
    bin(4);
    cout << endl;
    bin(5);
    cout << endl;
    bin(11);
    cout << endl;
    bin(75);
}

// Leetcode 191
// FOR INTEGER INPUTS
// class Solution {
// public:
//     int hammingWeight(int n) {
//         int count = 0;
//         while (n >= 1) {
//             if (n%2 == 1) {
//                 count++;
//             }
//             n/=2;
//         }
//         return count;
//     }
// };

// Optimized++
//     // FOR BINARY INPUTS
// int hammingWeight(uint32_t n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         count += (n & 1); // Add 1 if the least significant bit is 1
//         n >>= 1;          // Right shift n by 1 to check the next bit
//     }
//     return count;
// };