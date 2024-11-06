// Sentido de movimiento

// trasladamos en línea recta desde el punto (x1, y1) hasta el punto (x2, y2)
//  avanzamos en los sentidos siguientes:  N, S, E, O, NE, NO, SE, SO.
// input: n, seguido de una secuencia de n cuartetos de enteros x1 y1 x2 y2
// output: el sentido en el que se avanza cuando nos trasladamos de (x1, y1) a (x2, y2)

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    //sequencia n veces
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // condiciones para saber las direcciones
        if (y2 > y1)cout << 'N';
        else if (y2 < y1) cout << 'S';
        if (x1 < x2) cout << 'E';
        else if (x1 > x2) cout << 'O';
        cout << endl;
    }
    
}