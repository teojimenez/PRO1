// Comparant fraccions

// 
// input: 
// output: 

#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2)
{
    return (n1 / double(d1)) < (n2 / double(d2));
}

int main()
{
    cout << c_frac(0, 3, 0, 3)<< endl;// → no
    cout << c_frac(1, 7, 2, 7)<< endl;// → si
    cout << c_frac(2, 7, 1, 7)<< endl;// → no
    cout << c_frac(-1, 7, 2, 7)<< endl;// → si
    cout << c_frac(2, 7, -1, 7)<< endl;// → no
    cout << c_frac(-630, 723, 510, 423)<< endl;// → si
}