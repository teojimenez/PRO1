// Amenaces alienígenes

// donada una matriu bidimensional, trobar la zona critica k x k,
// amb mes densitat (valor mes gran) i dins de la submatriu, trobar
// el valor mes gran.

// input: tamany de la matriu (n, m), valors enters positius dins la matriu
// i valor k de la submatriu
// output: coordenades de la zona amb mes densitat. Densitat total i cella de 
// de la submatriu amb mes densitat.

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

// post: una matriu de enters positius
// pre: demana valors per omplir la matriu
void escriu(Matriu &matriu)
{
    int n = matriu.size();
    int m = matriu[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matriu[i][j];
    }
}

// pre: una matriu de enters positius, les seves posicio (i, j),
// i tamany de la subquadrat.
// post: calcula la suma total del subquadrat
int subquadratSum(const Matriu &matriu, int i_inicial, int j_inicial, int k)
{
    int sum = 0;
    for (int i = i_inicial; i < i_inicial + k; ++i)
    {
        for (int j = j_inicial; j < j_inicial + k; ++j)
            sum += matriu[i][j]; //suma tots es valors
    }
    return sum;
}

// pre: una matriu de enters positius, les seves posicio (i, j),
// i tamany de la subquadrat.
// post: calcula el valor maxim dins el subquadrat
int maxCella(const Matriu &matriu, int i_inicial, int j_inicial, int k)
{
    int max_val = -1;
    for (int i = i_inicial; i < i_inicial + k; ++i)
    {
        for (int j = j_inicial; j < j_inicial + k; ++j)
        {
            if (matriu[i][j] > max_val)
                max_val = matriu[i][j]; //troba el maxim
        }
    }
    return max_val;
}

// post: una matriu amb numeros enters
// pre: calcula el subquadrat mes gran i el seu enter mes gran.
// un cop s'han trobat els valors maxims, ho imprimeix
void calcular(const Matriu &matriu)
{
    int k;
    cin >> k;

    int n = matriu.size();
    int m = matriu[0].size();

    int max_subquadrat = -1;
    int max_cella = -1;
    int result_x = 0;
    int result_y = 0;

    for (int i = 0; i <= n - k; ++i)
    {
        for (int j = 0; j <= m - k; ++j)
        {
            int valor_subquadrat = subquadratSum(matriu, i, j, k);
            //troba el subquadrat amb mes densitat
            if (valor_subquadrat > max_subquadrat)
            {
                //guarda tota la informacio
                max_subquadrat = valor_subquadrat;
                result_x = i;
                result_y = j;
                max_cella = maxCella(matriu, i, j, k);
            }
        }
    }

    cout << '(' << result_x << ',' << result_y << ')' << endl;
    cout << max_subquadrat << endl << max_cella << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n != 0) 
    { // busqueda sentinela
        int m;
        cin >> m;

        Matriu matriu(n, vector<int>(m));
        escriu(matriu);
        calcular(matriu);

        cin >> n;
    }
}
