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
  - `Pair` :-
    ```cpp
    pair<int, string> myPair = {1, "AbcD"};
    pair<int, int> myPairArr[] = {{2, 4}, {5, 8}, {9, 13}};
    pair<int, pair<int, int>> conjPair = {3, {5, 7}};
    cout << conjPair.second.first << endl;  // should give 5
    ```
   - `Vector` :-
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
    - `List` in C++ :-
      - List is similar to vector.
      - All vectors iterators and functions are used here.
      - "push_front" is cheaper(affordable) than "insert" in Vectors.
        ```cpp
        // List in C
        list<int> lst;
        lst.push_back(5);
        lst.emplace_back(6);
        lst.push_front(9);
        // lst.pop_back();
        for (auto itl : lst){cout << itl << " ";}
        ```
    - `Deque` (same as list and vectors)
    - `Stack` :-
      - LIFO (Last In, First Out)
      - Operations: Push, Pop, Top/Peek (All in TC: O(1)-constant)
      - size(), swap(), etc
        ```cpp
        st.push(4);
        st.push(6);
        st.pop(9);
        cout << st.size() << endl;
        cout << st.top() << endl;
        ```
    - `Queue` :-
      - FIFO (First In, First Out)
      - Operations: Push, Pop, Front, Back
      - All functions like size swap same as stack.
        ```cpp
        queue<int> Q;
        Q.push(3);
        Q.push(4);
        Q.push(6);
        Q.push(9);
        cout << Q.front() <<endl;
        cout << Q.back() <<endl;
        Q.pop();
        cout << Q.front() <<endl;
        cout << Q.back() <<endl;
        ```
    - `Priority_Queue` :-
      - Same as Queue, but, the Largest is always on the Top, and shortest on the bottom.
      - Operations: Push, Pop, Top (TC: push/pop- LogN, top- O(1)-constant)
      - based on Tree data structure.
      - In Minimum heap, shortest on top, and largest on the bottom. 
        ```cpp
        // Max Heap
        priority_queue<int> pq;
        pq.push(12);
        pq.push(34);
        pq.push(8);
        pq.emplace(55);
        cout << pq.top() << endl;
        pq.pop();
        cout << pq.top() << endl;

        // Minimum Heap
        priority_queue<int, vector<int>, greater<int>> minPQ;
        //same operations
        ```
    - `Set` :-
      - Sorted & unique elements only.
      - All iterators & functions(swap, size, erase, count) and printing using itr works, similar to vector.
      - set.find() :-
        - If found, stores address of the found elem.
        - If Not, stores set.end()
      - TC: LogN
        ```cpp
        set<int> sett;
        sett.emplace(3);
        sett.insert(7);
        sett.emplace(5); // {3,5,7}
        for (auto itlk : sett){cout << itlk << " ";}
        cout << endl;
        auto itlk2 = sett.find(7); // find method
        cout << *itlk2 << endl;
        // Imps: find(), count(), erase()
        ```
    - `Upper_Bound` & `Lower_bound` in vector/List (C++)
      - `lower_bound` : it gives iterator(address) of the same element or ***immediate*** next *first* higher element.
        ```cpp
        // list lst = {2,3,4,6,7};
        int ind = lower_bound(a,a+n, 4) - a;  //itr of 4, a=2
        int ind = lower_bound(a,a+n, 5) - a;  //itr of 6, a=2
        int ind = lower_bound(a,a+n, 13) - a;  //itr= lst.end()(), a=2
        ```
        - To get just smaller element, but greatest of all elem before it,...
          ```cpp
          // list<int> lst= {1,2,4,4,4,4,9,11};
          int ind = lower_bound(a, a+n, X) - a; //X = 4
          ind--;  // (ind)>=0
          ```
        - TC: LogN
      - `upper_bound` : it gives iterator(address) of the ***immediate*** next *first* higher element.
        ```cpp
        // list lst = {2,3,4,6,7};
        int ind = upper_bound(a,a+n, 4) - a;  //itr of 6, a=2
        int ind = upper_bound(a,a+n, 5) - a;  //itr of 6, a=2
        int ind = upper_bound(a,a+n, 13) - a;  //itr= lst.end()(), a=2
        ```
        - This can give "Last occurence" of a number by doing...
          ```cpp
          // list<int> lst= {1,2,4,4,4,4,9,11};
          int ind = upper_bound(a, a+n, X) - a; //X = 4
          ind--;  // (ind)>=0
          //given, ind is not at the first elem
          ```
        - It points to next greater element in the array.
        - TC: LogN
  
  - < heading >
    - < content >






<!-- Begin New Notes here! Start writing... -->
<!-- New Notes... -->

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