// P7981

// Write a program to compute powers.
// input: integer numbers a and b
// output: print a pow b

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)   
    {
        int pow = 1;
        for (int i = 0; i < b; i++) pow *= a;
        cout << pow << endl;
    }
}