#include <iostream>
using namespace std;

int main()
{
    // While loop
    int num1;
    cout << "Enter a num: ";
    cin >> num1;
    int i = 1;
    while (i <= num1)
    {
        cout << "Data Structures & Algorithms- " << i << endl;
        i += 1;
    }

    // Sum of n numbers
    int num;
    int sum = 0;
    int i = 1;
    cout << "Enter a num: ";
    cin >> num;
    while (i <= num)
    {
        sum += i;
        i += 1;
    }
    cout << "=> Sum of " << num << " numbers is: " << sum << endl;

    // Find sum of all even No.s
    int num2;
    int sum2 = 0;
    int j = 1;
    cout << "Enter a num: ";
    cin >> num2;
    while (j <= num2)
    {
        if (j % 2 == 0)
        {
            sum2 += j;
        }
        j += 1;
    }
    cout << "Sum of All even No.s " << num2 << " numbers is: " << sum2 << endl;

    // Fahrenheit to Celsius conversion
    float Cels, fahren;
    Cels = 0;
    cout << "Enter Temp in fahrenheit: ";
    cin >> fahren;
    Cels = ((fahren - 32) * (5.0 / 9));
    cout << "Temp in Celsius is: " << Cels << endl;

    // check if number prime or not
    // int a;
    // cout << "Enter a number: ";
    // cin >> a;
    // int i = 2;
    // while (i < a)
    // {
    //     if (a % i == 0)
    //     {
    //         cout << "Not Prime \n";
    //     }
    //     else
    //     {
    //         cout << "Prime Number \n";
    //     }
    //     i += 1;
    // }

    // Better approach
    int a;
    bool condn = true;
    cout << "Enter a number: ";
    cin >> a;
    int i = 2;
    while (i < a)
    {
        if (a % i == 0)
        {
            condn = false;
        }
        i += 1;
    }
    if (condn)
    {
        cout << a << " is a Prime Number. \n";
    }
    else
    {
        cout << a << " is Not Prime. \n";
    }
}