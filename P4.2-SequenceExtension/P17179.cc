// Mesures estadístiques

// demanar n numero de sequencies
// de cada sequencia escriure -> minim, max, i mitja
// input: n sequencies, amb m sequencia de numeros
// output: minim, max, i mitja de cada sequencia

#include <iostream>
using namespace std;

int main()
{
    int nlineas;
    cin >> nlineas;
    for (int i = 0; i < nlineas; i++)
    {
        int numerosElems;
        cin >> numerosElems;

        double seq;

        cin >> seq;
        double max = seq, min = seq, media = seq;
        for (int j = 0; j < numerosElems - 1; j++)
        {
            cin >> seq;
            if (seq > max) max = seq;
            if (seq < min) min = seq;
            media += seq;
        }
        cout.setf(ios::fixed);
        cout.precision(4);

        cout << min << " " << max << " " << (media / numerosElems) << endl;
    }
}