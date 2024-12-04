// Reverse of sequences

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v)
{
    double result = 0;
    for (int i = 0; i < u.size(); i++)
    {
        result += u[i] * v[i];
    }
    return result;
}

void add_data(vector<double>& u, vector<double>& v)
{
    for (int i = 0; i < u.size(); i++)
        cin >> u[i];
    for (int i = 0; i < u.size(); i++)
        cin >> v[i];
    
}

int main()
{
    int n;
    cin >> n;
    vector<double> u(n),v(n);
    add_data(u, v);

    cout << producte_escalar(u,v) << endl;
}