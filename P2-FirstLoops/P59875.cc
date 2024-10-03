// Top to bottom

// reads two numbers x and y, and prints all numbers between x and y
// input: two integer numbers x and y.
// output: Print all integer numbers between x and y

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    // choosing the bigger one and printing the range of numbers
    if(x < y)
        while (y >= x) cout << y-- << endl;
    else
        while (x >= y) cout << x-- << endl;
}