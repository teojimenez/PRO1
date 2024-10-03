// Harmonic numbers (1)

// reads a number n and prints the n-th harmonic number, 
// defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
//     12 + 22 + … + (n−1)2 + n2 .

// input:  natural number n.
// output: Print Hn with 4 digits after the decimal point.

#include <iostream>
using namespace std;

int main()
{
    // notación fija i precision de salida a 4 decimales
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    double result = 0;
    cin >> n;

    // add n-th harmonic number to an double result
    for (int i = 1; i <= n; i++) result += 1.0000 / i;
    cout << result << endl;
}