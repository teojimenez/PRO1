// Almenys 5 Nombres ABCA

// sequencia de numeros i retornar "SI" si hi ha almenys 5 enters amb
// el primer digit igual al ultim digit. (Quatre digits) o "NO".

// input: seqüècia sense sentinella de naturals
// output: "SI" o "NO"

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    while (cin >> n)
    {
        //te quatre digits
        if (n / 10000 == 0)
        {
            //verificar si ultimDigit == primerDigit
            if (n % 10 == n / 1000) ++count;
        }
    }
    //si hi han almenys 5 numeros, retornem "SI", sino "NO"
    if (count > 4) cout << "SI";
    else cout << "NO";
}