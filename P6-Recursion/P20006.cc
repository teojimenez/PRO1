// Expressions min-max

// llegir expressio min-max que entra i demanar numeros/instruccions per evaluarla
// input: string min-max o be numero enter positiu, i valors
// output: retornar el numero o be el minim o maxim amb un integer

#include <iostream>
using namespace std;

bool is_digit(int x)
{
    return (x >= '0' and x <= '9');
}

// pre: llegeix una expressio min-max
// post: retorna el valor adient
int mmeval()
{
    char data;
    int result;
    cin >> data;

    if (!is_digit(data))
    {
        int e1 = mmeval();
        int e2 = mmeval();

        if (data == '+') result = e1 + e2;
        else if (data == '-') result = e1 - e2;
        else result = e1 * e2;
    }
    else
        result = data - '0';

    return result;
}

int main()
{
    cout << mmeval() << endl;
}