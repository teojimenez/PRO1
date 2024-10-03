// Números raros

// un número positivo es “raro” si al sumar cada una de sus cifras
// elevadas al número de cifras que lo forman, obtenemos el propio número.

// input: positivo n con n > 0 y n < 10000.
// output: Imprime n de entrada y dice si es número “raro” o no.

#include <iostream>
using namespace std;

int main()
{
    int n, copia_n; //numero n y copia del numero n
    cin >> n;

    //uso una copia para no perder el valor de n en ningun paso.
    copia_n = n;
    int cifras = 0; //cifras del numero para mas adelante hacer la potencia
    while (copia_n > 0)
    {
        copia_n /= 10;
        ++cifras;
    }

    copia_n = n;
    int resultado = 0;
    //sumar todas las potencias de las cifras
    while (copia_n > 0)
    {
        // potencia de cada cifra
        int potencia = 1;
        for (int i = 1; i <= cifras; i++) potencia *= copia_n % 10;
        //sumamos el valor de la potencia al resultado
        resultado += potencia;
        copia_n /= 10;
    }
    // imprimimos el resultado segun la condicion
    if (n == resultado) cout << "strange number: " << n << endl;
    else cout << "not strange number: " << n << endl;
    
}