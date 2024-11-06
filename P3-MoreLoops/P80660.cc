//  La seqüència de Collatz

// demana numeros i veure quan pasos tarda a arribar a 1.
// si es parell, dividir entre dos
// si es senar, multiplicar per 3 i sumar 1

// input: n ≥ 1.
// output: Per a cada n, passos a arribar a arribar a 1.

#include <iostream>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        int resultado = 0;
        //mientras no sea 1 hacemos la operaciones
        //cada vez que se hacer una opreacion, resultado++
        while (n != 1)
        {
            if (n % 2 == 0) n /= 2;
            else n = (n * 3) + 1;
            ++resultado;
        }
        cout << resultado << endl;
    }
}