// base 2 a 16, poner las cifras

// 
// input: numero natural
// output: imprime con las bases 2 a 16 sus crifas cone ste formato:
//         Base x:x cifras.

#include <iostream>
using namespace std;

int main()
{
    int n, aux, cifras;
    cin >> n;

    // recorremos por bases y calculamos las cifras
    for (int i = 2; i <= 16; i++)
    {
        // reestablecemos los valores
        aux = n;
        cifras = 0;
        while(aux > 0)
        {
            ++cifras;
            aux /= i;
        }
        // imprimir con el formato especificado
        cout << "Base " << i << ": " << cifras << " cifras." << endl;
    }
}