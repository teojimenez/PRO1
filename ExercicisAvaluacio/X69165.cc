// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    char c1,c2,c3, q;
    int result;
    while (cin >> c1 >> q >> c2 >> q >> c3)
    {
        if (c1 == 'x') result = (c3 - '0') - (c2 - '0');
        else if (c2 == 'x') result = (c3 - '0') - (c1 - '0');
        else result = (c1 - '0') + (c2 - '0');
        cout << result << endl;
    }
     
}