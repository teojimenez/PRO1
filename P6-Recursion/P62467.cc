// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void asteriscs(int n)
{
    if (n == 1) 
        cout << "*" << endl;
    else
    {
        asteriscs(n - 1);

        for (int i = 0; i < n; i++) cout << "*";
        cout << endl;

        asteriscs(n - 1);
    }
}

int main()
{
    int n;

    cin >> n;
    asteriscs(n);
}