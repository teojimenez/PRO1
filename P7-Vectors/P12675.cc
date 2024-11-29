// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

// pre: dos vectores con enteros en orden creciente
// post: devuelve los valores comunes en los dos vectores
int elements_comuns (const vector<int>& X, const vector<int>& Y)
{
    int count = 0;
    int i = 0;
    int j = 0;
    int x_size = X.size();
    int y_size = Y.size();

    while (x_size > i and y_size > j)
    {   
        if (Y[j] == X[i])
        {
            ++count;
            ++i;
            ++j;
        }
        else if (Y[j] > X[i]) ++i;
        else ++j;
    }
    return count;
}

// pre: 
// post: devuelve un vector con valores segun el tamano introducido
vector <int> rellenar_vector()
{
    int n;
    cin >> n;
    vector <int> result(n);
    for (int i = 0; i < n; i++)
    {
        cin >> result[i];
    }
    return result;
}

int main()
{

    vector<int> X = rellenar_vector();
    vector<int> Y = rellenar_vector();

    cout << elements_comuns ( X, Y) << endl;
}