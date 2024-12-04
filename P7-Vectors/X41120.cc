// 

// 
// 

#include <iostream>
#include <vector>
using namespace std;

void print_all(const vector<int> result)
{
    
    int size = result.size();
    cout << size << ':';
    for (int i = 0; i < size; i++)
        cout << ' ' << result[i];

    cout << endl;

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (result[i] > result[size - 1])
        {
            if (count > 0) cout << ' ';
            cout << result[i];
            ++count;
        }
    }
    if (count < 1) cout << '-' << endl;
    else cout << endl;
}

vector<int> calcula_cims(const vector<int>& v)
{
    vector<int> result;

    int i = 0;

    int anteriorAnterior, anterior, n;
    while ((i + 2) < v.size())
    {
        anteriorAnterior = v[i], anterior = v[i+1], n = v[i+2];

        if (anteriorAnterior < anterior and n < anterior)
            result.push_back(anterior);
        i++;
    }
    print_all(result);
    return result;
}
void add_vector(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
}

int main()
{
    int tam;

    cin >> tam;
    vector<int> v(tam);

    add_vector(v);
    calcula_cims(v);
}