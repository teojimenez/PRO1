// Add one second
#include <iostream>
using namespace std;

int main()
{
	int h, m, s;
	cin >> h >> m >> s;

    // si anterior = 0, se incrementa el siguiene (sin salirse del resto)
    s = (s + 1) % 60;
    m = (m + (s == 0)) % 60;
    h = (h + (m == 0 and s == 0)) % 24;
    cout << ((h < 10) ? "0" : "") << h << ":" << ((m < 10) ? "0" : "") << m << ":" << ((s < 10) ? "0" : "") << s << endl;
}