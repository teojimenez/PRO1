// Control C102A
#include <iostream>
using namespace std;

int main()
{
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    if((x >= a and x <= b) or (x >= c and x <= d)) cout << "yes" << endl; //caso dentro de uno/ambos rango/s
    else cout << "no" << endl; //caso a > b o/y c > d o fuera del rango
}