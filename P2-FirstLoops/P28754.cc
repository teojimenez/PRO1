// Reversed number in binary

// reads a number and prints its binary representation reversed.
// input: natural number.
// output: Print, reversed, the binary representation of the number,
//         with as many zeros at its left as required.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 0) cout << 0;
    // print every residue dividing by 2, to get the binary number
    while (n > 0)
    {
        cout << n % 2;
        n /= 2;
    }
    cout << endl;
}