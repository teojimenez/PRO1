// Multiplication table

// reads a number n and prints the “multiplication table” of n.
// input: natural number n between 1 and 9
// output: Print the “multiplication table” of n.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // print the multiplication table
    for (int i = 1; i <= 10; i++)
    {
        cout << n << '*' << i << " = " << n * i << endl;
    }
}