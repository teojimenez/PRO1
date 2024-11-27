// Seqüència doblement estocàstica

// sequencia de casos, amb un n natural > 0 que es el n de sequencies
// i nombre de naturals per sequencia. Determinar si es estocastica 
// si cada columna i fila suma 10

// input: sequencia de casos i natural amb un n x n de numeros naturals > 0
// output: "true" or "false" si es estocaustica o no.

#include <iostream>
#include <vector>
using namespace std;

// pre: vector de ints amb la suma de les columnes
// post: true or false segons si totes tenen la suma de 10
bool check_columnas(vector <int> vec)
{
    int i = -1;
    bool estocastica = true;
    //mirem si cada posicio del vector es 10, si hi ha alguna que no, no ho es
    while (++i < vec.size() and estocastica)
    {
        if (vec[i] != 10) estocastica = false;
    }
    return estocastica;
}

int main()
{
    int n;

    while (cin >> n)
    {
        int i = -1;
        bool estocastica = true;
        vector <int> columnas(n); //vector on es guarda la suma de les columnes

        while (++i < n and estocastica)
        {
            int count_fila = 0; //contador dels numeros de les files
            int actual_n; // numero natural de posicio
            for (int j = 0; j < n; j++)
            {
                cin >> actual_n;
                count_fila += actual_n; //sumem total de la fila
                columnas[j] += actual_n; //sumem a la posicio de la columna adient
            }
            //verifica si la fila es estocastica
            if (count_fila != 10) estocastica = false;
        }

        // si no es estocaustica i no s'han iterat totes les columnes
        // s'ha de buidar el buffer
        while (i < n)
        {
            int actual_n;
            for (int j = 0; j < n; j++) cin >> actual_n;
            i++;
        }
        //verificacio si es estocastica per files i si les columnes tambe ho son
        if (estocastica and check_columnas(columnas)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}