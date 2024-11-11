// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int suma_digits(int x)
{
    int suma = 0;
    while (x > 0)
    {
        suma += (x % 10);
        x /= 10;
    }
    return suma;
}

int reduccio_digits(int x)
{
    if (x < 10)
    {
        return x;
    }
    else
    {
        return reduccio_digits(suma_digits(x));
    }
}

// int main()
// {
//     cout << reduccio_digits(0) << endl;
// }