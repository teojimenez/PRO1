// Funció per la suma del mínim i el màxim de tres enters

// 
// input: 4 numeros
// output: 

#include <iostream>
using namespace std;

//sumador de 2 numeros
//numeros naturales
int max2(int a, int b)
{
    int result = b;
    if (a > b) result = a;
    return result;
}

//sumador de 4 numeros
//numeros naturales
int max4(int a, int b, int c, int d)
{
    return max2(max2(a, b), max2(c, d));
}

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        cout << max4(a, b, c, d) << endl;
    }
    
    // cout << max4(10, 20, 5, 8) << endl;// → 20
    // cout << max4(0, -2, 15, 15) << endl;// → 15
    // cout << max4(-1, -2, -3, -4) << endl;// → -1
}