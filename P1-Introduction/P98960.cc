// lower to upper or reverse
#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    cout << ((c >= 'a' && c <= 'z') ? char(c - 32) : char(c + 32)) << endl;
}