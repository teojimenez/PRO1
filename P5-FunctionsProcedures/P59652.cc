// Llegiu un nombre racional (1)

// 
// input: 
// output: 
#include <iostream>
using namespace std;

void read_rational(int& num, int& den) {
    char slash;
    cin >> num >> slash >> den;
    
    int copiaNum = num, copiaDen = den;

    while (copiaDen != 0)
    {
        int temp = copiaDen;
        copiaDen = copiaNum % copiaDen;
        copiaNum = temp;
    }

    num /= copiaNum;
    den /= copiaNum;
}

int main() {
    int a = 66, b = 12;
    read_rational(a, b);
}
