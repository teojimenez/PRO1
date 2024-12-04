// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int senar(int n, int &result)
{
    int copia = n;

    while (copia > 0)
    {
        if ((copia % 10) == 1 or (copia % 10) == 3 or (copia % 10) == 5 or (copia % 10) == 7 or (copia % 10) == 9)
            result = result * 10 + (copia % 10);
        copia /= 10;
    }
    return result;
}

int parell(int n)
{
    int result  = 0;
    int copia = n;

    while (copia > 0)
    {
        if ((copia % 10) == 2 or (copia % 10) == 4 or (copia % 10) == 6 or (copia % 10) == 8)
            result = result * 10 + (copia % 10);
        copia /= 10;
    }
    return senar(n, result);
}

int main()
{
    int n;

    while (cin >> n)
    {
        int num = parell(n);
        int reversed = 0;
        while (num != 0)
        {
            int digit = num % 10;       
            reversed = reversed * 10 + digit; 
            num /= 10;                  
        }
        cout << reversed << ' ' << (reversed * 2) << endl;
    }
     
}