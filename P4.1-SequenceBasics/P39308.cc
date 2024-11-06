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
        cout << "divisors of " << n << ':';
        int div = 1;
        while (div * div <= n)
        {
            if (n % div == 0)
            {
                cout << ' ' << div;
            }

            ++div;
        }
        div--;

        while (div >= 1)
        {
            if (n % div == 0 && div != n / div)
                cout << ' ' << n / div;
            --div;
        }
        cout << endl;
    }
}