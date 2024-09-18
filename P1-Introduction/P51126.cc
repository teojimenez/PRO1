// Intervals (1)
#include <iostream>
using namespace std;

int main()
{
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;

    int x = max(a1, a2);
    int y = min(b1, b2);
    // si x > y, no es la intersección, es el espacio vacio entre los intervalos
    if(x > y) cout << "[" "]" << endl;
    else cout << "[" << x << "," << y << "]" << endl;
}