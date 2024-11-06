// Comparant resultats d'operacions

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    string comparador;
    char operador;
    int num1, num2, num3;
    while (cin >> num1 >> operador >> num2 >> comparador >> num3)
    {
        int resultOperator = 0;
        if (operador == '*') resultOperator = num1 * num2;
        if (operador == '+') resultOperator = num1 + num2;
        if (operador == '-') resultOperator = num1 - num2;

        bool result = false;
        if  (comparador.length() > 1)
        {
            if (comparador[0] == '=') result = resultOperator == num3;
            if (comparador[0] == '!') result = resultOperator != num3;
            if (comparador[0] == '>') result = resultOperator >= num3;
            if (comparador[0] == '<') result = resultOperator <= num3;
        }
        else
        {
            if (comparador[0] == '>') result = resultOperator > num3;
            if (comparador[0] == '<') result = resultOperator < num3;
        }
        if (result) cout << "true" << endl;
        else cout << "false" << endl;
    }
}