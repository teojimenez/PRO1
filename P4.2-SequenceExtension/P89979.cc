// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int nPalabras;

    int lineaOrder = 0;
    int count = 0;
    while (cin >> nPalabras and lineaOrder == 0)
    {
        count++;
        string anterior, actual;

        cin >> anterior;
        
        bool bien = true;
        int j = 0;

        while (j < nPalabras - 1 and bien)
        {
            cin >> actual;
            if (anterior > actual)
                bien = false;
            anterior = actual;
            ++j;
        }
        while (++j < nPalabras)
            cin >> actual;
        
        if (bien and lineaOrder == 0) lineaOrder = count;
    }
    if (lineaOrder == 0)
        cout << "No hi ha cap linia ordenada creixentment." << endl;
    else
        cout << "La primera linia ordenada creixentment es la "
         << lineaOrder << '.' << endl;
}