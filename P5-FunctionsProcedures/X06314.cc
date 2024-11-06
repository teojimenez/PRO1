// Seqüències similars (2)

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void info_sequencia(int& suma, int& ultim)
{
    int seq;
    cin >> seq;

    while (seq != 0)
    {
        suma += seq;
        ultim = seq;
        cin >> seq;
    }
}

int main()
{
    int sumaPrimer = 0, ultimPrimer = 0, result = 1;
    info_sequencia(sumaPrimer, ultimPrimer);
    
    int sumaSeq;
    cin >> sumaSeq;
    while(sumaSeq != 0)
    {
        int ultimoSeq = sumaSeq;
        info_sequencia(sumaSeq, ultimoSeq);
        if (sumaSeq == sumaPrimer and ultimoSeq == ultimPrimer) ++result;
        cin >> sumaSeq;
    }
    cout << result << endl;
}