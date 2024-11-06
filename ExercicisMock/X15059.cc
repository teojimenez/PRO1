// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool ascendente = true;
    for (int i = 0; i < n; i++)
    {
        double seq, anterior;
        cin >> seq;

        if (seq != -1)
        {
            anterior = seq;
            cin >> seq;
        }
        while (seq != -1 and ascendente)
        {
            if (seq < anterior) ascendente = false;
            else
            {
                anterior = seq;
                cin >> seq;
            }
        }
        while (seq != -1) cin >> seq;
    }
    if (ascendente) cout << "Si" << endl;
    else cout << "No" << endl;
}