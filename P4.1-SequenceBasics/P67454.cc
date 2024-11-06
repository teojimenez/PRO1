// Counting a's (2)

// sequence of characters and prints the number of letters ‘a’
//  in the sequence before the first period.
// input:  a sequence of characters with at least one period.
// output: number of times that ‘a’ appears in the sequence before the first '.'

#include <iostream>
using namespace std;

int main()
{
    char c;
    int countPoint = 0, result = 0;
    while (cin >> c and countPoint != 1)
    {
        if (c == '.') ++countPoint;
        if (c == 'a') ++result;
    }
    cout << result << endl;
}