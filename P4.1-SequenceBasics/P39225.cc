// I-th (1)

// demanar un numero i demanar seq i retornar numero en la posicio
// del primer numeor demanat
// input: un numeor y una sequencia
// output: contingut de la posicio del primer numero

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    int seq, posicio = 0;
    while (cin >> seq and seq != -1)
    {
        //retornar el numero que hi ha a la posicio de n
        if (++posicio == n) 
            cout << "A la posicio " << n << " hi ha un " << seq << '.' << endl;
    }
}