// Control C202E

// llegeixi un natural n i escrigui figures n× n
// input: L’entrada és un natural n ≥ 1.
// output: Cal escriure la figura corresponent.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; i--)
    {
        int add = i;
        int asterisc = (n - i) - 1;

        for (int j = 0; j < add; j++) cout << '+';
        cout << '/';
        for (int x = 0; x < asterisc; x++) cout << '*';
        cout << endl;
    }
    
}