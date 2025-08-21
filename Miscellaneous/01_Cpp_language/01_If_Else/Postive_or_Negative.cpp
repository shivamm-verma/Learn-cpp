#include <iostream>
using namespace std;

int main()
{
    // Taking Inputs
    int num;
    cout << "Give a number: ";
    cin >> num;
    // cout << "your input: " << num << endl;

    // Check if number is positive or Negative or zero
    if (num > 0)
    {
        cout << num << " is Positive" << endl;
    }
    else if (num == 0)
    {
        cout << num << " is Zero" << endl;
    }
    else
    {
        cout << num << " is Negative" << endl;
    }

    // Which number is greater
    int a,b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    if (a>b){
        cout << "A is greater than B";
    }else if (a==b){
        cout << "A equals B";
    } 
    else {
        cout << "B is greater than B";
    }
    
}