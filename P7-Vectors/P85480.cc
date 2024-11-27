// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n, int divisor)
{
    bool result;

    if (n < 2)
        result = false;
    else if (divisor*divisor > n)
        result = true;
    else if (n % divisor == 0)
        result = false;
    else result = is_prime(n, ++divisor);

    return result;
}

bool sum_vec_primes(vector <int> vec)
{
    bool trobat = false;
    int i = -1;
    while (++i < vec.size() and not trobat)
    {
        int j = -1;
        while (++j < vec.size() and not trobat)
        {
            if (is_prime(vec[i] + vec[j], 2) and i != j) trobat = true;
        }
    }
    return trobat;
}

int main()
{
    int n;

    while (cin >> n)
    {
        vector <int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        if (sum_vec_primes(vec)) cout << "si" << endl;
        else cout << "no" << endl;
    }
    
}