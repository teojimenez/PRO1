// Distancia al origen

// 
// input: 
// output: 

#include <iostream>
#include <math.h>
using namespace std;

double dist_or(double x, double y)
{
    return sqrt(x * x + y * y);
}

int main()
{
    cout << dist_or(634, 371) << endl; // → 734.573
    cout << dist_or(-31, -21) << endl; // → 37.4433
}