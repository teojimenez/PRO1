// 

// 
// input: 
// output: 

#include <iostream>
#include <math.h>
using namespace std;

struct Punt {
    double x, y;
};

double distancia(const Punt& a, const Punt& b)
{
    double x = (b.x - a.x) * (b.x - a.x);
    double y = (b.y - a.y) * (b.y - a.y);
    return sqrt(x + y);
}

// int main()
// {
//     Punt a;
//     a.x = 2;
//     a.y = 3;
//     Punt b;
//     b.x = 1;
//     b.y = 5;
//     cout << distancia(a, b) << endl;
// }
