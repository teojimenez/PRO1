// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    while (cin >> n)
    {
        int result = 0; int multp = 1;
        while (n > 0)
        {
            if ((n % 10) % 2 == 0)
                result += ((n % 10) + 1) * multp;
            else 
                result += (n % 10) * multp;
            n/= 10;
            multp *= 10;
        }
        cout << result <<endl;
    }
}