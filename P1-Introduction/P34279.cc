// Add one second
#include <iostream>
using namespace std;

int main()
{
	int h, m, s;
	cin >> h >> m >> s;

    if(s == 59)
    {
        s = 0;
        if(m == 59)
        {
            m = 0;
            if(h < 23) h++;
            else h = 0;
        }
        else m++;
    }
        else s++;
    cout << ((h < 10) ? "0" : "") << h << ":" << ((m < 10) ? "0" : "") << m << ":" << ((s < 10) ? "0" : "") << s << endl;
}