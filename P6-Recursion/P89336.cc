// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void reverse_string(int &n, int &mitad)
{
    string str;
    if (cin >> str)
    {
        n++;
        mitad = n / 2;
        reverse_string(n, mitad);
        n--;
        if (n < mitad)
        {
            cout << str << endl;
        }
    }
}

int main()
{
    int n = 0;
    int mitad = 0;
    reverse_string(n, mitad);
}