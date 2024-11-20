// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int myStoi(const string str)
{
    int result = 0;
    int posicionCaracter = 1;
    for (int i = str.length(); i >= 0; i--)
    {
        result += ((str[i] - '0') * posicionCaracter);
        posicionCaracter *= 10;
    }
    return result;
}

int main()
{
    string str = "123456789";
    cout << myStoi(str) << endl;
}