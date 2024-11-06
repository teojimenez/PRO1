// Control C202B

// calcular la variança dels nombres fent servir una formula
// input: natural n≥ 2 seguit de n nombres reals x1, x2,…, xn.
// output: valor de la variança dels n nombres donats amb exactament dos dígits

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);

    double n, sumador1 = 0, sumador2 = 0, resultado;

    cin >> n;
    //fer cada sumatori 
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        sumador1 += x * x;
        sumador2 += x;
    }
    //fer la variança
    resultado = 
    (sumador1 / (n - 1.00)) - ((sumador2 * sumador2) / (n * (n - 1.00)));
    cout << resultado << endl;
}