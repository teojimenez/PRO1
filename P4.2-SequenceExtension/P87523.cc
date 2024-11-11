// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;


int main() {
    char c, anterior;
    int estat = 0;
    bool trobat = false;

    cin >> anterior;
    if (anterior != '.')
        cin >> c;
    else c = anterior;

    while (c != '.' and not trobat)
    {
        if (anterior == 'h' and c == 'o' and estat == 0) estat = 1;
        else if (anterior == 'o' and c == 'l' and estat == 1) estat = 2;
        else if (anterior == 'l' and c == 'a' and estat == 2)
        {
            trobat = true;
        }
        else estat = 0;

        anterior = c;
        cin >> c;
    }
    if (trobat) cout << "hola" << endl;
    else cout << "adeu" << endl;
}