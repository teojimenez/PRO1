// Expressions min-max

// llegir expressio min-max que entra i demanar numeros/instruccions per evaluarla
// input: string min-max o be numero enter positiu, i valors
// output: retornar el numero o be el minim o maxim amb un integer

#include <iostream>
using namespace std;

// pre: obte un numero en un string i la seva posicio
// post: retorna el valor en un enter positiu mitjancant la recursivitat
int strToInt(string str, int posicion)
{
    int result;
    if (posicion > 0)
        result = strToInt(str, posicion - 1) * 10 + (str[posicion] - '0');
    else
        result = str[posicion] - '0';
    
    return result;
}

// pre: llegeix una expressio min-max
// post: retorna el valor adient
int mmeval()
{
    string data;
    int result;
    cin >> data;

    if (data == "max")
    {
        //trucada recursiva per obtenir el numero o be la proxima expressio
        int e1 = mmeval();
        int e2 = mmeval();
        //retornem el valor adient
        if (e1 > e2) result = e1;
        else result = e2;
    }
    else if (data == "min")
    {
        int e1 = mmeval();
        int e2 = mmeval();

        if (e1 < e2) result = e1;
        else result = e2;
    }
    else
    {
        int length = data.length() - 1;
        //result amb valor de string a int
        result = strToInt(data, length);
    }

    return result;
}

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
        cout << mmeval() << endl;
}