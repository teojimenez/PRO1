// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        int result;
        if ((b > a and b < c) or (b > c and b < a)) result = b;
        else if ((a > b and a < c) or (a > c and a < b)) result = a;
        else result = c;
        cout << result << endl;
    }
}