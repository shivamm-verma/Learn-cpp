#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Print Divisors of a number
    int num = 69;

    vector<int> divisors = {};
    int divisor = num;
    // int divisor = num-1; // to not include the num

    while (divisor != 0)
    {
        if (num % divisor == 0)
        {
            divisors.emplace_back(divisor);
        }
        divisor--;
    }

    // printing all divisors in stored vector
    auto it = divisors.begin();
    while (it < divisors.end())
    {
        cout << *it << endl;
        it++;
    }
}