// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

 struct Racional {
    int num, den;
};

Racional racional(int n, int d)
{
    Racional result;
    if (n == 0) d = 1;
    result.num = n;
    result.den = d;

    return result;
}
// s'ha de fer el mcd