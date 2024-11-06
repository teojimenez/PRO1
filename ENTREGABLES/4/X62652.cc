// Sumes de seqüències autodelimitades

// sequencia autodelimitada amb numeros binaris duplicats i amb '01'
// per diferenciar canvi de numeros i 0101 per determinar fi de sequencia

// input: zero o mes sequencies autodelimitades de numeros binaris
// output: suma dels numeros binaris en decimal per sequencia autodelimitada

#include <iostream>
using namespace std;

int main()
{
    char bit1, bit2;
    int numero = 0, resultat = 0;

    while (cin >> bit1 >> bit2)
    {
        //cas 01 (canvi de numero o fi)
        if (bit1 != bit2)
        {
            cin >> bit1 >> bit2;

            //si es el final
            if (bit1 != bit2)
            {
                resultat += numero;
                cout << resultat << endl;
                //reiniciar valors
                resultat = 0;
                numero = 0;
            }
            else //canvia de numero
            {
                resultat += numero; //sumem el numero antic
                numero = 0; // reiniciar numero per el seguent
            }
        }
        // entra desde el de canvi de numero o quan s'afegeixen els numeros
        if (bit1 == bit2) numero = numero * 2 + (bit1- '0');
    }

}
//no hi ha if(); else; perque aixi quan surt del 'else' de canviar de numero,
//suma ja el numero al if(), per no haver de repetir codi