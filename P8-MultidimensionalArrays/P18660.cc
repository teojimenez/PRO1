// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Matriu;

char to_lower(char c)
{
    char result = c;
    if (c >= 'A' and c <= 'Z') result += 32;
    return result;
}
void upper_paraula(Matriu &matriu, const string instruccio, int i_inici, int j_inici, const string& paraula)
{
    int len = paraula.length();
    if (instruccio == "horitzontal")
    {
        for (int j = 0; j < len; ++j)
        {
            char& c = matriu[i_inici][j + j_inici];
            if (c >= 'a' && c <= 'z') c -= 32;
        }
    }
    else if (instruccio == "vertical")
    {
        for (int i = 0; i < len; ++i)
        {
            char& c = matriu[i + i_inici][j_inici];
            if (c >= 'a' && c <= 'z') c -= 32;
        }
    }
    else if (instruccio == "diagonal")
    {
        for (int w = 0; w < len; ++w)
        {
            char& c = matriu[i_inici + w][j_inici + w];
            if (c >= 'a' && c <= 'z') c -= 32;
        }
    }
}
void horitzontal(int i, int j, string paraula, Matriu &matriu, int m)
{
    int w = -1;
    bool es_paraula = true;
    int j_inici = j;

    if (j + (paraula.length() - 1) > m) es_paraula = false;

    while (es_paraula and ++w < paraula.length())
    {       
        if (paraula[w] != to_lower(matriu[i][j]))
            es_paraula = false;
        ++j;
    }
    if (es_paraula and w == paraula.length())
        upper_paraula(matriu, "horitzontal", i, j_inici, paraula);
}
void diagonal(int i, int j, string paraula, Matriu &matriu, int n)
{
    int w = -1;
    bool es_paraula = true;
    int j_inici = j;
    int i_inici = i;

    if (paraula.length() > n - i) es_paraula = false;

    while (es_paraula and ++w < paraula.length())
    {       
        if (paraula[w] != to_lower(matriu[i][j]))
            es_paraula = false;
        ++j;
        ++i;
    }
    if (es_paraula and w == paraula.length())
        upper_paraula(matriu, "diagonal", i_inici, j_inici, paraula);
}
void vertical(int i, int j, string paraula, Matriu &matriu, int n)
{
    int w = -1;
    bool es_paraula = true;
    int i_inici = i;

    if (i + (paraula.length() - 1) > n) es_paraula = false;

    while (es_paraula and ++w < paraula.length())
    {
        
        if (paraula[w] != to_lower(matriu[i][j]))
            es_paraula = false;
        ++i;
    }
    if (es_paraula and w == paraula.length())
        upper_paraula(matriu, "vertical", i_inici, j, paraula);
}
void write(vector <string> &vec, Matriu &matriu, int tamany_v, int n, int m)
{
    //omplir vector
    for (int i = 0; i < tamany_v; ++i)
        cin >> vec[i];

    //omplir matriu
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matriu[i][j];  
    }
}
void print(Matriu matriu, int n, int m, int count)
{
    if (count > 0) cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j > 0) cout << ' ';
            cout << matriu[i][j];
        }
        cout << endl;
    }
}
void search(vector <string> vec, Matriu &matriu, int n, int m)
{
    for (int w = 0; w < vec.size(); w++)
    {
        int i = -1;
        while (++i < n)
        {
            int j = -1;
            while (++j < m)
            {
                if (vec[w][0] == to_lower(matriu[i][j]))
                {
                    horitzontal(i, j, vec[w], matriu, m);
                    vertical(i, j, vec[w], matriu, n);
                    diagonal(i, j, vec[w], matriu, n);
                }
            }
        }
    }
}

int main ()
{
    int tamany_v, n, m;
    int count = 0;

    while (cin >> tamany_v >> n >> m)
    {
        vector <string> vec(tamany_v);
        Matriu matriu(n, vector<char>(m));

        write(vec, matriu, tamany_v, n, m);
        search(vec, matriu, n, m);
        print(matriu, n, m, count);
        ++count;
    }
}