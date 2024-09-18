// time
#include <iostream>
using namespace std;

int main()
{
    int t, h, m, s;
    cin >> t;
    h = t / 3600;
    m = (t % 3600) / 60; //tiempo restante de las horas dentro de los minutos
    s = t % 60; // tiempo restante de los minutos
    cout << h << " " << m << " " << s << endl;
} 