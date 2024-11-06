// Parells creixents

// seqüències de naturals,per cada un n parells de nombres consecutius 
// input:  natural n, seguit de n seqüències de naturals. acaba en zero.
// output:  nombre de parells de nombres consecutius de cada sequencia

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int seq, anterior;

        cin >> seq;
        while (seq != 0)
        {
            anterior = seq;
            cin >> seq;
            if (anterior < seq) ++count;
        }

        cout << count << endl;
    }
    
}