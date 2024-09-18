// temperature
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    if(t <= 0)
        cout << "it's cold" << endl << "water would freeze" << endl;
    else
    {
        if(t >= 100)
            cout << "it's hot" << endl << "water would boil" << endl;
        else if(t > 30)
            cout << "it's hot"<< endl;
        else if(t < 31 && t > 9)
            cout << "it's ok"<< endl;
        else if(t < 10)
            cout << "it's cold"<< endl;
    }
}