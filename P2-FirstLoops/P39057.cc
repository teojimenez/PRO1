// Càlcul d'àrees 

// llegir descripcions de rect. i de cercles, i esciure l’àrea corresponent.
// input: nombre n, seguit de n descripcions i figura
// output:  l’àrea amb 6 decimals.

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str == "rectangle")
        {
            double c1, c2;
            cin >> c1 >> c2;
            cout << c1 * c2 << endl;
        }
        else
        {
            double pi = 3.141592653589793, r;
            cin >> r;
            cout << pi * (r * r)<< endl;
        }
    }
    
}