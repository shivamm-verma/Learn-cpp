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

- 


## *Techniques&Codes*
- How to `reverse` a num:
```cpp
int dig = n %10;
new_num = (new_num*10) + dig;   //reversed
```

- How to `reverse` a num:
```cpp
int dig = n %10;
new_num = (dig* pow(10,i) ) + new_num;
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

## *Leetcode Question Concepts*