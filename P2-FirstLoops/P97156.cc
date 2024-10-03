// Numbers in an interval

// reads two numbers a and b, and prints all numbers between a and b.
// input: two natural numbers a and b.
// output: 

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while (a <= b) 
    {
        cout << a;
        if (a++ != b) cout << ',';
    }
    cout << endl;
}