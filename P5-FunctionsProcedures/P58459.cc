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

bool es_data_valida(int d, int m, int a)
{
    if (d <= 0 or m <= 0) return false;

    //febrer
    if (m == 2)
    {
        if (es_any_de_traspas(a) and d <= 29) return true;
        else if (d <= 28) return true;
    }

    //mesos amb 30 dies
    if (m == 11 or m == 9 or m == 6 or m == 4)
    {
        if (d <= 30) return true;
    }
    //sino mesos de 31 dies
    if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12)
    {
        if (d <= 31) return true;
    }

    return false;
}

int main()
{
    cout << es_data_valida(29, 2, 2000) << endl;// → true
    cout << es_data_valida(29, 2, 3000) << endl;// → false
    cout << es_data_valida(-3, 14, 2000) << endl;// → false
    cout << es_data_valida(1, -10, 1984) << endl;// → false
}