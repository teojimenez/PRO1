// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;


int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    double promedio1 = (n1+n2) / 2.0, promedio2 = (n1+n3) / 2.0, promedio3 = (n2+n3) / 2.0;
    bool result = false;

    if (promedio1 == n3 or promedio2 == n2 or promedio3 == n1) result = true;

    if (result) cout << "YES" << endl;
    else cout << "NO" << endl;
}