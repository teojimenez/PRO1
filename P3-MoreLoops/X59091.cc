// Rectangles (2)

// escrigui rectangles n× m.
// input: diversos naturals
// output: amb el tipus dels exemples

#include <iostream>
using namespace std;

int main()
{
    int a, b, first = 1;
    while (cin >> a >> b)
    {
        if (first == 1) first = 0;
        else cout <<  endl;

        int currentN = 10;
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                cout << --currentN;
                if (currentN == 0) currentN = 10;
            }
            cout << endl;
        }
    }
}