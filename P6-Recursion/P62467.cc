// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void asteriscs(int &n)
{
    if (n > 0)
    {
        cout << '*' << endl;
        --n;
        while (n > 0) cout << '*';
    }
}

int main()
{
    int n;

    cin >> n;
    asteriscs(n);
}