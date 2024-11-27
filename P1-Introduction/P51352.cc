// Elementos

// P / A / V juego
// input: Dos letras (A, P o V) separados por un espacio.
// output: Escribe una línea con el número 1 si vence el primero, 
//         el número 2 si vence el segundo, 
//         o un guión (‘-’) si se produce un empate.

#include <iostream>
using namespace std;

int main()
{
	char jugador1, jugador2;
	cin >> jugador1 >> jugador2;

    if (jugador1 == jugador2) cout << '-' << endl;
    else if ((jugador1 == 'A' and jugador2 == 'P') or
             (jugador1 == 'P' and jugador2 == 'V') or
             (jugador1 == 'V' and jugador2 == 'A')) cout << '1' << endl;
    else cout << '2' << endl;
}