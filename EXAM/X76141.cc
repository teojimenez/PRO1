// First n strange numbers

// 
// input:
// output:

#include <iostream>
using namespace std;

int main()
{
    //contador = contador de numeros extranos
    //currentNumber = numeor actual que miramos si es extrano
    int n, copia_n, currentNumber = 0, contador = 0; //numero n y copia del numero n
    cin >> n;

    //recorremos un contador hasta encontrar todos los numeros extranos
    while (contador <= n)
    {
        //uso una copia para no perder el valor de n en ningun paso.
        copia_n = currentNumber;
        int cifras = 0; //cifras del numero para mas adelante hacer la potencia
        while (copia_n > 0)
        {
            copia_n /= 10;
            ++cifras;
        }

        copia_n = currentNumber;
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
        if (currentNumber == resultado)
        {
            ++contador; //anadimos un valor al contador de numeros poruqe hemos encontrado un extrano
            cout << currentNumber << " ";
        }
        ++currentNumber; //augmentamos numeros cada poder ver si el siguiente es extrano
    }
}