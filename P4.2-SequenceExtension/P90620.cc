// La Pica d'Estats

// demanar seq de n i veure si hi ha algun n > 3143 i 
// i n > antecessor i n > successor
// input: sequencia de numeros
// output: SI oNO, si n > que la pica d'estats

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    bool trobat = false;
    
    int anterior, anteriorAnterior;
    cin >> anteriorAnterior >> anterior >> n;

    while (n != 0)
    {
        if (anterior > 3143 and anteriorAnterior < anterior and n < anterior)
            trobat = true;

        anteriorAnterior = anterior;
        anterior = n;
        cin >> n;
    }
    if (trobat) cout << "SI" << endl;
    else cout << "NO" << endl;
}