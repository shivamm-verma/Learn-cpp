# *DSA & Cpp Notes - [Shivam Verma](https://github.com/shivamm-verma/Learn-cpp)*

## *Notes&Points*
- `1's compliment`: changing all '1's to 0 & all '0's to 1 in any Binary Number.
    ```
    6(0110) -> (1001)
    ```

- `2's compliment`: changing all '1's to 0 & all '0's to 1 in any Binary Number, then add 1 bit at the end.
    ```
    6(0110) -> (1001) + 0001 -> (1010)
    ```

- `INT_MAX` & `INT_MIN`

- ### _C++ STL Lib:_
  - Pair 
    ```cpp
    pair<int, string> myPair = {1, "AbcD"};
    pair<int, int> myPairArr[] = {{2, 4}, {5, 8}, {9, 13}};
    pair<int, pair<int, int>> conjPair = {3, {5, 7}};
    cout << conjPair.second.first << endl;  // should give 5
    ```
   - Vector
     - Dynamic Size, can be accessed like array.
        ```cpp
        vector<int> v;
        vector<int> v2(v);
        v2.emplace_back(65); //v2.push_back(65);
        v2.push_back(19);
        cout << v.back() << endl; // gives 19
        ```
     - Vector iterators- begin() ,end() ,rend() ,rbegin() {actual first last elem itr}
        ```cpp
        vector<int>::iterator itr = v.begin();
        cout << *(itr) << endl;
        itr++;
        cout << *(itr) << endl;
        ```
     - Vector iterator- end()() (points to end address "After the Last element") 
        ```cpp
        vector<pair<int, int>> complx;
        complx.emplace_back(2, 5);
        vector<pair<int, int>>::iterator itr2 = complx.end(); // points to end address AFTER THE LAST ELEMENT
        itr2 = itr2 - 1; // to get to Last Element
        cout << itr2->first << "+" << itr2->second << "j" << endl;
        ```
     - Printing of vector using loops
        ```cpp
        for (auto itr3 = v.begin(); itr3 != v.end(); itr3++) {
            cout << *(itr3) << " => ";
        } cout << endl;
        // Easy way
        for (auto it : v){cout << it << " ";}
        ```
     - Erasing/deleting in vectors (vector.erase(start, end)) => [start, end)
        ```cpp
        // Erasing in Vectors
        vector<int> vec = {3,4,5,6,7,8};
        vec.erase(vec.begin()+2);   // removes 5
        vec.erase(vec.begin()+1, vec.end()); // only first elem left
        for (auto itt:vec){
            cout << itt << " ";
        }
        ```
     - Inserting in vectors 
        ```cpp
        // Inserting in Vectors
        v.insert(v.begin() + 1, 55); // at 2nd
        v.insert(v.end(),3, 91); // at last, 91 91 91
        ```
     - Other Commands
        ```cpp
        v.size();
        v.pop_back();
        v1.swap(v2);
        v.clear();
        v.empty(); //gives 1 or 0
        ```


---

## *Techniques&Codes*
- How to get `last bit` of a Bin number:
```cpp
while (n!=0){
    int bit = n & 1;
    n /= 10; 
    }
```

- How to `reverse` a num:
```cpp
int dig = n %10;
new_num = (new_num*10) + dig;   //reversed
n /= 10;
```

- How to `duplicate` a num:
```cpp
int dig = n %10;
new_num = (dig* pow(10,i) ) + new_num;  //duplicated
n /= 10;
```

- Binary to Decimal:
```cpp
int bin_to_dec(unsigned n)
{
    int two = 1, dec = 0;
    while (n != 0)
    {
        dec = dec + (two * (n % 10));
        two *= 2;
        n /= 10;
    }
    return dec;
}
```

- Decimal to Binary:
```cpp
int dec_to_bin(int n) // 5 to 101
{
    int two = 2, bin = 0;
    while (n != 0)
    {
        int dig = n % 2;
        bin = (bin * 10) + dig;
        n /= 2;
    }
    return bin;
}
```
---

## *Leetcode Question Concepts*