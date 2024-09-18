// sum three last digits
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // ultimo numero -> (restante de dividir entre 10)
    // el del medio dividiendo el numero  / 10
    // el ultimo dividiendo el numero  / 100
    cout << ((n % 10) + ((n / 10) % 10) + ((n / 100) % 10) ) << endl;
}