// Chess board (2)

// chess board with r rows and c columns, where every square contains 
// between 0 and 9 coins. Return all the coins in white spaces
// input:  rows r and columns c. each space with ‘0’ to ‘9’. coins
// output: Print the total white number of coins on the board.

#include <iostream>
using namespace std;

int main()
{
    int r, c, count = 0;
    cin >> r >> c;

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            char chr;
            cin >> chr;
            if ((i + j) % 2 == 0) count += chr - '0';
        }
    }
    cout << count << endl;
}