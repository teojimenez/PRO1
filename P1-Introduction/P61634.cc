// Leap years
#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    // caso multiple de 4 que no acaban con dos ceros
    // caso acaban con dos zeros y despues de quitarlos, los numeros son divisibles por 4
    if((y % 4 == 0 and y % 100 != 0) or (y % 100 == 0 and (y / 100) % 4 == 0))
        cout << "YES" << endl;
    else cout << "NO" << endl;
}