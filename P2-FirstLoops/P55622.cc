// Number of digits (1)

// Write a program that reads a number and prints its number of digits.
// input: natural number n
// output: Print the number of digits of n.

#include <iostream>
using namespace std;

int main()
{
    int n, length = 0;

    cin >> n;
    cout << "The number of digits of " << n << " is ";

    // control number 0 and get the length of the number
    if(n == 0) length = 1;
    while (n > 0)
    {
        ++length;
        n /= 10;
    }
    // printing the result with the format especified
    cout << length << '.' << endl;
}