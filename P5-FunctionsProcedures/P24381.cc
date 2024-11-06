// Escriviu una creu

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void cross(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        int mitat = n / 2;
        
        if (i != mitat + 1)
        {
            for (int j = 0; j < mitat; j++)
                cout << ' ';
            cout << c << endl;
        }
        else
        {
            for (int w = 0; w < n; w++)
                cout << c;
            cout << endl;
        }
    }
}

int main()
{
    cross(7, 'X');
}