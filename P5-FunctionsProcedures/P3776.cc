// Trigonometria

// seq de numeors y devolver el sin y cos
// input: seq de numeros
// output: calcular el sinus i cosinus

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double seq;

    while (cin >> seq)
    {
        cout.setf(ios::fixed);
        cout.precision(6);

        double radians = seq * M_PI / 180.0;

        cout << sin(radians) << ' ' << cos(radians) << endl;
    }
}