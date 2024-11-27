// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

struct Rellotge {
    int h;      // hores (0<=h<24)
    int m;      // minuts (0<=m<60)
    int s;      // segons (0<=s<60)
};

Rellotge mitja_nit()
{
    Rellotge rel;
    rel.h = rel.m = rel.s = 0;
    return rel;
}

void incrementa(Rellotge& r)
{
    r.s = (r.s + 1) % 60;
    r.m = (r.m + (r.s == 0)) % 60;
    r.h = (r.h + (r.m == 0 and r.s == 0)) % 24;
}
void escriu(const Rellotge& r)
{
    cout << r.h / 10 << r.h % 10 << ':'
        << r.m / 10 << r.m % 10 << ':'
        << r.s / 10 << r.s % 10 << endl;
}