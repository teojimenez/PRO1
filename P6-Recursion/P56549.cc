// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void changeBase(int n, int base)
{
    if (n > 0)
    {
        changeBase(n / base, base);
        cout << n % base;
    }
}

void hex(int n)
{
    if (n > 0)
    {
        hex(n / 16);
        int digit = n % 16;
        if (digit > 9) cout << char((digit - 10) + 'A');
        else cout << digit;
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n > 0)
        {
            cout << n << " = ";
            changeBase(n, 2);
            cout << ", ";
            changeBase(n, 8);
            cout << ", ";
            hex(n);
            cout << endl;
        } else cout << "0 = 0, 0, 0" << endl;
    }
}