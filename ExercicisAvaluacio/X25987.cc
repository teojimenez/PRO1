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
        int count = 0;
        if (n > 99)
        {
            while (n / 100 > 0)
            {
                int nextNextDigit = (n / 100) % 10;
                int nextDigit = (n / 10) % 10;
                int actualDigit = n % 10;
                if (nextDigit > nextNextDigit and nextDigit > actualDigit) ++count;
                n /= 10;
            }
        }
        cout << count << endl;
    }
}