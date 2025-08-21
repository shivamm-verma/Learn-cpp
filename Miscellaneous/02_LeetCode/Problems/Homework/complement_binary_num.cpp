#include <iostream>
using namespace std;

// bin to dec
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
// dec to bin
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

// To do: 1's compiment of a num
int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;
    int bina = dec_to_bin(num);
    cout << "Bin: " << bina << endl;
    int com_bina=0;
    while (bina != 0)
    {
        int bit = bina & 1;
        if (bit == 1)
        {
            com_bina = (com_bina * 10) + bit;
        }
        else
        {
            com_bina = (com_bina * 10) + bit;
        }
        bina = bina >> 1;
    }
    cout << "Com bina: " << com_bina << endl;
}

// int main()
// {
//     cout << bin_to_dec(1011) << endl; // gives 11
//     cout << bin_to_dec(100) << endl;  // gives 4
//     cout << dec_to_bin(5) << endl;    // gives 101
//     cout << dec_to_bin(16) << endl;   // gives 1000
// }