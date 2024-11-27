// Funció per als anys de traspàs

// 
// input: 
// output: 

#include <iostream>
using namespace std;

bool es_any_de_traspas(int any)
{
    if (any % 4 == 0)
    {
        if (any % 100 != 0 or any % 400 == 0) return true;
    }
    return false;
}

int main()
{
    cout << es_any_de_traspas(1967) << endl;// → false
    cout << es_any_de_traspas(1968) << endl;// → true
    cout << es_any_de_traspas(2100) << endl;// → false
    cout << es_any_de_traspas(2400) << endl;// → true
}