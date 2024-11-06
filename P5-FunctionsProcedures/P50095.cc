// Següent primer

// 
// input: 
// output: 

#include <iostream>
using namespace std;

bool es_primo(int n) {

    bool prime = true;
    if (n < 2) return false;
    int d = 2;

    while (d*d <= n and prime)
    {
        if (n % d == 0) prime = false;
        ++d;
    }
    return prime;
}

int main()
{
    bool final = false;
    while (!final)
    {
        int n;
        cin >> n;
        if (es_primo(n))
        {
            bool foundNextPrime = false;
            while (!foundNextPrime)
            {
                ++n;
                if (es_primo(n))
                    foundNextPrime = true;
            }
            cout << n << endl;
        }
        else final = true;
    }
}
