// Reversed number

// Write a program that reads a number and prints it reversed.
// input: natural number.
// output: Print the number reversed

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 0) cout << 0;
    while(n > 0)
    {
        cout << n % 10;
        n /= 10;
    }
    cout << endl;
}