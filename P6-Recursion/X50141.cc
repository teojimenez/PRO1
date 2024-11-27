// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int engreixa(int x)
{
    if (x < 10) return x;

    int prefix = engreixa(x / 10);
    int last_digit = x % 10;
    int max_digit = last_digit;
    if (prefix % 10 > last_digit) max_digit = prefix % 10;

    return prefix * 10 + max_digit;
}

int main()
{
    int n;
    cin >> n;
    cout << engreixa(n) << endl;
    
}