// Control C202F

// llegir sequencia i retornar els numeros que acabin amb les
// les tres xifres del primer numero
// input: sequencia de numeros

// output: retornar numeros que acabin amb les mateixes xifres
// que els primers

#include <iostream>
using namespace std;

int main()
{
    int seqN, nPrimEncontrado = false, count = 0,
    digit3 = 0, digit2 = 0, digit1 = 0;

    while (cin >> seqN)
    {
        // guardem dades del primer numero
        if (not nPrimEncontrado)
        {
            digit3 = seqN % 10;
            digit2 = (seqN / 10) % 10;
            digit1 = (seqN / 100) % 10;

            cout << "nombres que acaben igual que " << seqN << ':' << endl;
            nPrimEncontrado = true;
        }
        else if (seqN % 10 == digit3 and
           (seqN / 10) % 10 == digit2 and
           (seqN / 100) % 10 == digit1)
        {
            //en cas de que acabin com el primer
            //fem print i ++count
            ++count;
            cout << seqN << endl;
        }
    }
    cout << "total: " << count << endl;
}