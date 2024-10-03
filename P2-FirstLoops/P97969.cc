// Control C201A

// reads a sequence of characters ended with a period and prints
// the number of letters ‘a’ in the sequence.

// input: sequence of characters
// output: number of times that ‘a’ appears in the sequence.

#include <iostream>
using namespace std;

int main()
{
    char c;

    int count = 0;
    while (cin >> c and c !=  '.')
        if(c == 'a') ++count;

    cout << count << endl;
}