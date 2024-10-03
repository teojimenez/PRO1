// Control C202D

// per a cada parell d’enters a i b donats, calculi i escrigui 
// la suma de tots els cubs entre a i b.
// input: seqüència de parells d’enters a i b.
// output: el resultat de la suma a3 + (a + 1)3 + ⋯ + (b − 1)3 + b3.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // per cada parell d'entrada
    while (cin >> a >> b)
    {
        int count = 0;
        // cub de cada nombre es suma a count
        for (int i = a; i <= b; i++) 
            count += i * i * i;
        // imprimeix amb el format especificat
        cout << "suma dels cubs entre " << a << " i " << b << ": " 
             << count << endl;
    }
}