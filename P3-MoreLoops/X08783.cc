//How many digits?

// Write a program that computes the number of digits in several bases.
// input: sequence of pairs of natural numbers b and n
// output: print the number of digits of n in base b.

#include <iostream>
using namespace std;

int main()
{
    int n, b;
    while (cin >> b >> n)   
    {
        int result = 0;
        while (n > 0)
        {
            n /= b;
            ++result;
        }
        cout << result << endl;
    }
}