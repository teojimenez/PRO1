// Funció per la suma del mínim i el màxim de tres enters

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z)
{
    int max = x, min = x;
    if (y > max) max = y;
    if (z > max) max = z;
    
    if (y < min) min = y;
    if (z < min) min = z;

    return max + min;
}

int main()
{
    cout << sum_min_max(736, 291, 348) << endl;// → 1027
    cout << sum_min_max(12, -569, 666) << endl;// → 97
    cout << sum_min_max(23, 22, 20) << endl;// → 43
}