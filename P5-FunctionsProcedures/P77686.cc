// Palindromic numbers

// 
// input: 
// output: 

#include <iostream>
using namespace std;

bool is_palindromic(int n)
{
    int numInvertido = 0, copiaNum = n;

    while (n > 0)
    {
        numInvertido = numInvertido * 10 + (n % 10);
        n /= 10;
    }
    return numInvertido == copiaNum;
}

int main()
{
    cout << is_palindromic(12321)<< endl;// → true
    cout << is_palindromic(0)<< endl;// → true
    cout << is_palindromic(4004)<< endl;// → true
    cout << is_palindromic(12)<< endl;// → false
    cout << is_palindromic(100201)<< endl;// → false
}