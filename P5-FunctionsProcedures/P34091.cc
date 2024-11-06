// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

bool is_perfect(int n)
{
    int divisor = 1;

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            //propietat divisor
            //la divisio amb el divisor també es divisor del numero
            divisor += i + n/i;
        }
    }

    return (divisor == n && divisor != 1);
}

int main()
{
    cout << is_perfect(28) << endl; //true
    cout << is_perfect(1) << endl; //false
    cout << is_perfect(100) << endl; //false
    cout << is_perfect(0) << endl; //false
}

// MASSA TEMPS