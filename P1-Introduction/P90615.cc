// maximum
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << max(max(n1, n2), n3) << endl;
}