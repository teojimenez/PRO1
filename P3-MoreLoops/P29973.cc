// Triangle

// input: Input consists of a natural number n.
// output: Print n lines, in such a way that the i-th line contains i asterisks

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--) cout << '*';
        cout << endl;
    }
    
}