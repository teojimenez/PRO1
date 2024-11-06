// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

char encoded(char c, int k)
{
    char newC;
    if (c == '_') newC = ' ';
    else if (c >= 'a' and c <= 'z')
    {
        newC = (((c - 97) + k) % 26) + 97;
        newC += ('A' - 'a');
    }
    else newC = c;

    return newC;
}

int main()
{
    int n;

    while (cin >> n)
    {
        char c;
        
        cin >> c;
        while (c != '.')
        {
            cout << encoded(c, n);
            cin >> c;
        }
        cout << endl;
    }
}