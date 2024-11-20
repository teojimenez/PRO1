// 

// 
// input: 
// output: 

#include <iostream>
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

int sum_digits(int n)
{
    int result;
    if (n < 10) result =  n;
    else result = n % 10 + sum_digits(n / 10);

    return result;
}

bool es_primer_perfecte(int n)
{
    bool result;
    if (n < 10) result = (n == 5 or n == 2 or n == 3 or n == 7);
    else result = is_prime(n, 2) and es_primer_perfecte(sum_digits(n));

    return result;
}

// int main()
// {
//     int n;

//     while (cin >> n)
//         cout << is_prime(n, 2) << endl;
// }

int main()
{
    int n;

    while (cin >> n)
        cout << es_primer_perfecte(n) << endl;
}