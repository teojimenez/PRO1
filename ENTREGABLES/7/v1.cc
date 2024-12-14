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

// post: una matriu de enters positius, les seves posicio (i, j), 
// i tamany de la subquadrat.
// pre: retorna el enter mes gran del subquadrat
int maxCella(Matriu matriu, int i_inicial, int j_inicial, int k)
{
    int max = -1;

    int n = i_inicial + k;
    int m = j_inicial + k;

    //desde la posicio del subquadrat fins a k
    //en ambdues posicions (i, j)
    for (int i = i_inicial = 0; i < n; i++)
    {
        for (int j = j_inicial; j < m; j++)
        {
            //selecciona el valor mes gran del subquadrat
            if (matriu[i][j] > max) max = matriu[i][j];
        }
    }
    return max;
}

// post: una matriu de enters positius, les seves posicio (i, j), 
// i tamany de la subquadrat.
// pre: retorna el valor total del subquadrat
int subquadrat(Matriu matriu, int i_inicial, int j_inicial, int k)
{
    int result = 0;
    int n = i_inicial + k;
    int m = j_inicial + k;

    for (int i = i_inicial; i < n; i++)
    {
        for (int j = j_inicial; j < m; j++)
            result += matriu[i][j];
    }
    return result;
}


// post: enters positius amb els resultats a imprimir
// pre: imprimeix amb el format corresponent
void imprimir(int x, int y, int cella, int subquadrat)
{
    cout << '(' <<  x << ',' << y << ')' << endl;
    cout << subquadrat << endl << cella << endl;
}

// post: una matriu amb numeros enters
// pre: calcula el subquadrat mes gran i el seu enter mes gran.
// un cop s'han trobat els valors maxims, ho imprimeix
void calcular(Matriu matriu)
{
    int k;

    cin >> k;

    int max_cella = -1;
    int max_subquadrat = -1;

    int result_x = 0;
    int result_y = 0;

    //valors maxims a on poden haver subquadrats del tamany especificat
    int n_max = matriu.size() - k;
    int m_max = matriu[0].size() - k;

    int i = 0;
    //recorregut de la matriu mentres entri el subquadrat
    while (i <= n_max)
    {
        int j = 0;
        while (j <= m_max)
        {
            //calculem el valor del subqudrat i mirem si es mes gran que el maxim
            int valor_subquadrat = subquadrat(matriu, i, j, k);
            if (valor_subquadrat > max_subquadrat)
            {
                //si es mes gran, guardem les dades
                max_subquadrat = valor_subquadrat;
                result_x = i;
                result_y = j;
                //busquem la dada mes gran de la cella
                max_cella = maxCella(matriu, i, j, k);
            }
            ++j;
        }
        ++i;
    }
    imprimir(result_x, result_y, max_cella, max_subquadrat);
}

int main()
{
    int n;

    cin >> n;
    while (n != 0) //busqueda sentilena
    {   
        int m;
        cin >> m;
        
        Matriu matriu(n, vector<int>(m));
        escriu(matriu);
        calcular(matriu);

        cin >> n;
    }
}
