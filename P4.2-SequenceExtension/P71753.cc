// Màxim de cada seqüència

// llegir un num i acontinuacio llegir n vegades
// retornar max d'aquella seq
// input: sequencia de numeros
// output: max de cada seq

#include <iostream>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        int max = 0, nSeq;
        bool first = true;
        for (int i = 0; i < n; i++)
        {
            cin >> nSeq;
            if (first)
            {
                first = false;
                max = nSeq;
            }
            if (nSeq > max) max = nSeq;
        }
        cout << max << endl;
    }
}