// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

int avalua(const vector<int>& p, int x)
{
    int resultat = 0;
    for (int i = p.size() - 1; i >= 0; --i)
    {
        resultat = resultat * x + p[i];
    }
    return resultat;
}

// int main()
// {
//     int x;
//     cin >> x;
// }