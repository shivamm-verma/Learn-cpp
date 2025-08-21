#include <iostream>
#include <bits/stdc++.h>
// #include <vector>
// #include <algorithm>
// not needed
using namespace std;

int main()
{
    // actual way of upper_bound and lower_bounds
    list<int> lst = {2, 3, 4, 6, 7};
    // Convert list to vector
    vector<int> vec(lst.begin(), lst.end());

    // Use upper_bound on the vector
    auto a = vec.begin();
    auto n = vec.end();
    int idl = upper_bound(a, n, 6) - a;

    cout << "Index of upper bound: " << idl << endl;

    return 0;
}

// int main()
// {
//     list<int> lst = {2, 3, 4, 4, 4, 9, 11};
// }
