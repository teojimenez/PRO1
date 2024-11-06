// I-th (3)

// demanar un numero i demanar seq i retornar numero en la posicio
// del primer numer demanat
// si no hi ha el numero, retornar "posicio incorrecte"
// input: un numero y una sequenocia
// output: contingut de la posicio del primer numero

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    int seq, posicio = 0, trobat = false;
    while (cin >> seq and not trobat)
    {
        if (++posicio == n) 
        {
            cout << "A la posicio " << n << " hi ha un " << seq << '.' << endl;
            trobat = true;
        }
    }
    if (not trobat) cout << "Posicio incorrecta." << endl;
}