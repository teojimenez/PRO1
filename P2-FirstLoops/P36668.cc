// Sum of squares

// reads a natural number n, and prints the result of the following sum:
//     12 + 22 + … + (n−1)2 + n2 .

// input:  natural number n.
// output: sum of the first n squares: ∑i=1n i2.

#include <iostream>
using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;

    // add the square of each number to an int result
    for (int i = 1; i <= n; i++) result += i * i;
    cout << result << endl;
}