// Swap

// 
// input: 
// output: 

#include <iostream>
using namespace std;

//valor real de les variables
void swap2(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 5;
    cout << a << " " << b << " ";
    swap2(a, b);
    cout << a << " " << b << endl;
}