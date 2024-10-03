// Control C201B

// The n first lines of multiplication table of a natural number n 
// input: The input is a natural number n.
// output: print the n first lines of the multiplication table of n,

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // print the multiplication table
    for (int i = 1; i <= n; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}