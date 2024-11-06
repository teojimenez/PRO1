// Factorial iteratiu

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial *= i;
    return factorial;
}

int main()
{
    cout << factorial(0) << endl;// → 1
    cout << factorial(1) << endl;// → 1
    cout << factorial(2) << endl;// → 2
    cout << factorial(3) << endl;// → 6
    cout << factorial(4) << endl;// → 24
}