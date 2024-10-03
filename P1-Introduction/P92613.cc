// Rounding

// Write a program that reads a real number x≥0 and prints ⌊ x ⌋ 
// (the floor of x), ⌈ x ⌉ (the ceiling of x), and the rounding of x.
// input: 

// Piso (floor): Redondea hacia abajo al entero más cercano.
// Techo (ceil): Redondea hacia arriba al entero más cercano. (si ya es entero, no se suma)
// Redondeo (round): Redondea al entero más cercano (hacia arriba en caso de empate).

#include <iostream>
using namespace std;

int main()
{
    double n;
    double decimals;
    cin >> n;

    // print floor number
    cout << int(n) << " ";

    // print ceil number
    decimals = n - int(n);
    if (decimals > 0) cout << int(n + 1) << " ";
    else cout << int(n) << " ";

    // print round number
    if (n - int(n) >= 0.5) cout << int(n + 1) << endl;
    else cout << int(n) << endl;
}
