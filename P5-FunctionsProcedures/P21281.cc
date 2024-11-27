// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void factor(int n, int& f, int& q)
{
    int factor = 2;
    q = 0;
    while (factor * factor <= n)
    {
        int count = 0;
        while (n % factor == 0)
        {
            count++;
            n /= factor;
        }

        if (count > q or (count == q and factor < f))
        {
            q = count;
            f = factor;
        }

        ++factor;
    }
    //cas num factor si mismo
    if (n > 1 and (1 > q or n < f)) 
    {
        f = n;
        q = 1;
    }
    // cout << f << ' ' << q << endl;
}

// int main()
// {
//    int f = 0;
//    int q = 0;
//     factor(450, f, q);// → 3 2
//     factor(23, f, q);// → 23 1
//     factor(49, f, q);// → 7 2
// }