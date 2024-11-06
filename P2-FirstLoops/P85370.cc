// Interessos (1)

// calculeu en quants euros es transforma el capital inicial
// input: capital inicial c en euros, un interès anual i (expressat en %), 
// un temps t en anys
// output: Escriviu el capital final amb 4 decimals.

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    double c, i;
    int t;
    string type;

    cin >> c >> i >> t >> type;
    if (type == "simple")
    {
        cout << ((c * (i / 100)) * t) + c << endl;
    }
    else
    {
        double pow = 1;
        
        for (int j = 0; j < t; j++) pow *= 1 + (i / 100);
        cout << c + (c * (pow - 1)) << endl;
    }
}