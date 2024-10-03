// Reversed number in hexadecimal

// reads a number and prints its hex representation reversed.
// input: natural number.
// output: Print, reversed, the hex representation of the number,
//         with as many zeros at its left as required.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0) cout << 0;
    // print every residue dividing by 16, to get the hex number
    while (n > 0)
    {
        if ((n % 16) > 9) cout << char((n % 16) + 55);
        else cout << n % 16;
        n /= 16;
    }
    cout << endl;
}