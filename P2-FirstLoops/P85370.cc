// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);

    int c, i, t;
    string type; //?? string o char *

    cin >> c >> i >> t >> type;
    // simple -> n * (1 + ((i * t)/100))
    // simple -> n * (1 + (i/100)) * t
}