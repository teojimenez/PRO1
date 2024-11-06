// Primera posició

// llegir numeros i tornar posicio en la que hi hagi un parell
// input: sequencia de numeros
// output: posicio primer nombre parell

#include <iostream>
using namespace std;

int main()
{
    int n, resultado = 0, encontrado = 0;
    
    while (cin >> n)
    {
        ++resultado;
        //mirar si esn primer i si no s'ha trobat un abans
        if (n % 2 == 0 and encontrado == 0)
        {
            ++encontrado;
            cout << resultado << endl;
        }
    }
}