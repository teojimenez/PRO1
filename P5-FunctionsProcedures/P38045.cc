// Computing square roots and squares

// 
// input: seq ded numeros
// output: 

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int seq;

    while (cin >> seq)
    {
        cout.setf(ios::fixed);
        cout.precision(6);

        cout << seq * seq << ' ' << sqrt(seq) << endl;
    }
}