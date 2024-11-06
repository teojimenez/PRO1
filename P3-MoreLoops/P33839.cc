// P33839

// reads several numbers and prints the sum of the digits of each one.
// input: sequence of natural numbers.
// output: print the sum of its digits following the format.

#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)   
    {
        int copia = n;
        int resultado = 0;
        while (copia > 0)
        {
            resultado += copia % 10;
            copia /= 10;
        }
        cout << "The sum of the digits of " << n << " is " << resultado <<  '.' << endl;
    }
}