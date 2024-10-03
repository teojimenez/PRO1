// Intervals (3)

// Write a program that, given two intervals, tells if one is inside the other
// , and computes the interval corresponding to their intersection, 
// or tells that it is empty.
// input: four integer numbers a1, b1, a2, b2 -> [a1,b1] and [a2,b2].
// output: Print ‘=’ if the intervals are equal
//               ‘1’ if the first is inside the second
//               ‘2’ if the second is inside the first
//               ‘?’ otherwise

#include <iostream>
using namespace std;

int main()
{
    int a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int x = max(a1, a2);
    int y = min(b1, b2);

    // positions
    if (a1 == a2 && b1 == b2) cout << "=";
    else if (a1 >= a2 && b1 <= b2) cout << "1";
    else if (a2 >= a1 && b2 <= b1) cout << "2";
    else cout << "?";

    cout << " , ";
    // intersection
    if (x > y) cout << "[]" << endl;
    else cout << "[" << x << "," << y << "]" << endl;
}