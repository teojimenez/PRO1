// Concurs de talents

// simuli un sistema d’avaluació per a un concurs de talents amb tres jutges
// medalla or, plata i bronze
// premi a la unanimitat

// input: 3 enters.
// output: medalla, mitja amb dos decimals i si cal, premi a la unanimitat

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    // variables para la puntuacion
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    //calcular la media
    double media = (p1 + p2 + p3) / 3.00;
    
    // 1 1 0
    // 1 0 1
    // 0 1 1
    //si hay 2 puntuaciones iguales,
    // sumamos o restamos un valor a la media segun
    // el valor de la puntuacion diferente
    if (p1 == p2 and p3 != p1)
    {
        if(p3 < p1) ++media;
        else --media;
    }
    else if (p1 == p3 and p2 != p1)
    {
        if(p2 < p1) ++media;
        else --media;
    }
    else if (p2 == p3 and p2 != p1)
    {
        if(p1 < p2) ++media;
        else --media;
    }
    // seleccion de medallas segun la media
    if (media < 5) cout << "Cap premi" << endl;
    else if (media >= 5 and media < 7) cout << "Medalla bronze" << endl;
    else if (media >= 7 and media < 9) cout << "Medalla plata" << endl;
    else cout << "Medalla or" << endl;

    cout << media << endl;
    // si todos los valores son iguales -> premi a la unanimitat
    if (p1 == p2 and p2 == p3 and media >= 5) cout << "Premi a la unanimitat" << endl;
}