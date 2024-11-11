// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

bool is_palindromic(int n)
{
    int numInvertido = 0, copiaNum = n;

    while (n > 0)
    {
        numInvertido = numInvertido * 10 + (n % 10);
        n /= 10;
    }
    return numInvertido == copiaNum;
}

int main()
{
    bool trobat = false;
    int n;

    while (cin >> n and not trobat)
    {
        if (n > 99 and is_palindromic(n))
        {
            trobat = true;
            cout << n << '!' << endl;
        }
    }
    if (not trobat) cout << "Res." << endl;
}