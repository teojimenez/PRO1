// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

// constantes
const int MAXNUMBER = 1000000000;
const int TAMANO = 1001;

// pre: vector de ints de entre 0 y 1000
// post: lee los enteros y suma su valor en su posicion
void read_and_calculate(vector<int> &V)
{
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int numero;
        cin >> numero;
        ++V[numero - MAXNUMBER];
    }
}
// pre: vector de ints de entre 0 y 1000
// post: print de los que han salido mas de una vez
void print(vector<int> v)
{
    for (int i = 0; i < TAMANO; ++i)
    {
        if (v[i] != 0)
            cout << MAXNUMBER + i << " : " << v[i] << endl;
    }
}

int main ()
{
    vector<int> v(TAMANO, 0);

    read_and_calculate(v);
    print(v);
}