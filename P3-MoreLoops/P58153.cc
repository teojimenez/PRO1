// Harmonic numbers (2)

// Write a program that reads pairs of numbers n and m with n ≥ m,
//  and for each pair prints Hn − Hm.
// input: several pairs of natural numbers n and m such that n ≥ m.
// output: print Hn − Hm with 10 digits after the decimal point.

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m;
    while (cin >> n >> m)
    {
        double result = 0;

        for (int i = m + 1; i <= n; i++) result += 1.0000000000 / i;
        cout << result << endl;
    }
}