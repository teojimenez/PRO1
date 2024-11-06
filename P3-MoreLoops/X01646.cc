// Sum of digits (2)

// reads basis for numeration and several numbers and prints the sum 
// in base 10 of the digits in base b of each one.

// input:   b≥ 2 followed by a sequence of natural numbers.
// output:  sum (in base 10) of its digits in base b

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int n, b;
    cin >> b;
    while (cin >> n)   
    {
        cout << n << ": ";
        int result = 0;
        while (n > 0)
        {
            result += n % b;
            n /= b;
        }
        cout << result << endl;
    }
}