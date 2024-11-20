#include <iostream>
#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main()
{
    // pair
    pair<int, string> myPair = {1, "AbcD"};
    pair<int, int> complex = {1, 3}; // 2+5j
    cout << myPair.first << ", " << myPair.second << endl;
    pair<int, int> myPairArr[] = {{2, 4}, {5, 8}, {9, 13}};
    cout << myPairArr[1].second << endl; // should give 8
    pair<int, pair<int, int>> conjPair = {3, {5, 7}};
    cout << conjPair.second.first << endl; // should give 5

    // Vectors - containers
    vector<int> v;
    v.emplace_back(21);
    v.emplace_back(64);
    v.emplace_back(78);
    v.emplace_back(19);
    cout << "Size of the vector: " << v.size() << endl;
    cout << v.back() << endl; // gives 19

    // vector iterators - begin()
    vector<int>::iterator itr = v.begin();
    cout << *(itr) << endl;
    itr++;
    cout << *(itr) << endl;

    // vector itr2 - end()
    vector<pair<int, int>> complx;
    complx.emplace_back(4, 9);
    complx.emplace_back(2, 5);
    // points to end address AFTER THE LAST ELEMENT
    vector<pair<int, int>>::iterator itr2 = complx.end();
    itr2 = itr2 - 1; // to get to Last Element
    cout << itr2->first << "+" << itr2->second << "j" << endl;
    itr2 = itr2 - 1; // to get to Second-Last Element
    cout << itr2->first << "+" << itr2->second << "j" << endl;

    // print vector with loops
    // for (auto itr3 = v.begin(); itr3 != v.end(); itr3++) // auto was=vector<int>::iterator
    // {
    //     cout << *(itr3) << " => ";
    // }
    // cout << endl;
    // easy way
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // Erasing in Vectors
    vector<int> vec = {3, 4, 5, 6, 7, 8};
    vec.erase(vec.begin() + 2);            // removes 5
    vec.erase(vec.begin() + 1, vec.end()); // only first elem left
    // vec.erase(start, end) => [start, end]
    for (auto itt : vec)
    {
        cout << itt << " ";
    }
    cout << endl;

    // Inserting in Vectors
    v.insert(v.begin() + 1, 55); // at 2nd
    v.insert(v.end(), 3, 91);    // at last, 91 91 91
    for (auto itt : v)
    {
        cout << itt << " ";
    }
    cout << endl;

    // other commands (v.size(), v.pop_back(), v1.swap(v2), v.clear(), v.empty())
}