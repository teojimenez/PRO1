// Primalitat

// n per a mirar n numeros si son primers o no
// input: quantitat de numeros i seq de numeros
// output: Dir si els numeros son primers o no

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n > 0)
    {
        int i = 2;
        int numSeq;

        cin >> numSeq;

        bool isPrime = true;
        while (i*i <= numSeq and isPrime)
        {
            if (numSeq % i == 0)
                isPrime = false;
            i++;
        }
        if (!isPrime or numSeq < 2) cout << numSeq << " no es primer" << endl;
        else cout << numSeq << " es primer" << endl;
        n--;
    }    
}