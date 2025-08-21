#include <iostream>
using namespace std;

int main()
{
    int num = 127;
    int chk = num - 1;
    bool condition = 1;
    while (chk > 1)
    {
        if (num % chk == 0)
        {
            // cout << "The Impostor(s): " << chk << endl;
            condition = 0;
        }
        chk--;
    }

    if (condition == 0)
        cout << "Not a prime num lol.\n";
    else
        cout << "A Prime number fr.\n";
}