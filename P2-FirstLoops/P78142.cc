// Average

// reads a sequence of numbers and prints their average.
// input: non-empty sequence of strictly positive real numbers.
// output: average of the numbers with 2 decimals.

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double n, sum = 0.0;
    int count = 0;

    // llamada constante a cin para recibir numeros
    while(cin >> n)
    {
        sum += n;
        ++count;
    }
    // media (suma de numeros entre la cantidad)
    cout << sum / count << endl;
}