// Assignació (2)

// programa que compti quantes setmanes acaben amb un saldo estrictament ++.
// input: espeses fixes setmanals, els estalvis inicials, 
// i el nombre de setmanes amb assignació,
// output: quantes de les t setmanes s’ha tingut saldo estrictament positiu

#include <iostream>
using namespace std;

int main()
{
    int despeses, estalvis, setmanes, resultat = 0;
    cin >> despeses >> estalvis >> setmanes;

    for (int i = 0; i < setmanes; i++)
    {
        int sem;
        cin >> sem;
        estalvis += (sem - despeses);
        if (estalvis > 0) ++resultat;
    }
    cout << resultat << endl;
}