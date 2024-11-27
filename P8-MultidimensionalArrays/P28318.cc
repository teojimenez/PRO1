// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector< vector<int> > matriu(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matriu[i][j];  
    }
    
    string consulta;
    while (cin >> consulta)
    {
        if (consulta == "fila")
        {
            int i;
            cin >> i;
            cout << consulta << ' ';
            cout << i << ':';
            --i;
            for (int j = 0; j < m; j++)
                cout << ' ' << matriu[i][j];
        }
        else if (consulta == "columna")
        {
            int j;
            cin >> j;
            cout << consulta << ' ';
            cout << j << ':';
            --j;
            for (int i = 0; i < n; i++)
                cout << ' ' << matriu[i][j];  
        }
        else
        {
            int i, j;
            cin >> i >> j;
            cout << consulta << ' ';
            cout << i << ' ' << j << ':';
            --i;
            --j;
            cout << ' ' << matriu[i][j];
        }
        cout << endl;
    }
    
}