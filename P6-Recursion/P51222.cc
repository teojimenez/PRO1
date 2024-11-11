// Recursive number of digits

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int nombre_digits(int n)
{
    //caso ultimo n = 0 or n mas pequeno que 10
    if (n == 0 or n / 10 == 0) return 1;
    return 1 + nombre_digits(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << nombre_digits(n) << endl;
}