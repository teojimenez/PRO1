// Movements on the ground

// reads a sequence of characters -> ‘n’, ‘s’, ‘e’, or ‘w’.
// and returns the final position
// input: sequence of characters ‘n’, ‘s’, ‘e’, or ‘w’.
// output: final position of an object initially located at (0, 0).

#include <iostream>
using namespace std;

int main()
{
    char c;
    int x = 0, y = 0;
    while (cin >> c)
    {
        if (c == 'n') --y;
        else if (c == 's') ++y; 
        else if (c == 'e') ++x;
        else if( c == 'w') --x;
    }
    cout << '(' << x << ", " << y << ')' << endl;
}