#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char> > Matriu;
typedef vector<vector<int> > Matriu_nums;

int calculate_max(int i, int j, Matriu_nums matriu_nums, string paraula, char instruccio)
{
    int result = 0;
    int len = paraula.length();
    int di = 0, dj = 0;

    if (instruccio == 'h') dj = 1;
    else if (instruccio == 'v') di = 1;

    for (int w = 0; w < len; ++w)
    {
        result += matriu_nums[i + (w * di)][j + (w * dj)];
    }
    return result;
}

void search_word(int i, int j, const string &paraula, const Matriu &matriu, const Matriu_nums &matriu_nums, int &max)
{
    int len = paraula.length();
    bool horitzontal_ok = (j + len <= matriu[0].size());
    bool vertical_ok = (i + len <= matriu.size());

    if (horitzontal_ok)
    {
        bool es_paraula = true;
        int w = 0;
        while (w < len && es_paraula)
        {
            if (paraula[w] != matriu[i][j + w])
                es_paraula = false;
            ++w;
        }
        if (es_paraula)
        {
            int newMax = calculate_max(i, j, matriu_nums, paraula, 'h');
            if (max < newMax) max = newMax;
        }
    }

    if (vertical_ok)
    {
        bool es_paraula = true;
        int w = 0;
        while (w < len && es_paraula)
        {
            if (paraula[w] != matriu[i + w][j])
                es_paraula = false;
            ++w;
        }
        if (es_paraula)
        {
            int newMax = calculate_max(i, j, matriu_nums, paraula, 'v');
            if (max < newMax) max = newMax;
        }
    }
}

void write(Matriu &matriu, Matriu_nums &matriu_num, int n, int m)
{
    // omplir matriu
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matriu[i][j];
    }
    // omplir matriu
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matriu_num[i][j];
    }
}

void search(Matriu &matriu, Matriu_nums &matriu_nums, int n, int m)
{
    int words;

    cin >> words;

    for (int w = 0; w < words; ++w)
    {
        int max = -1;
        string paraula;
        cin >> paraula;
        int len = paraula.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (paraula[0] == matriu[i][j] and (len <= (n - i) or len <= (m - j)))
                {
                    search_word(i, j, paraula, matriu, matriu_nums, max);
                }
            }
        }
        if (max == -1) cout << "no" << endl;
        else cout << max << endl;
    }
}

int main()
{
    int n, m;

    while (cin >> n >> m)
    {
        Matriu matriu(n, vector<char>(m));
        Matriu_nums matriu_num(n, vector<int>(m));

        write(matriu, matriu_num,n, m);
        search(matriu, matriu_num, n, m);
    }
}
