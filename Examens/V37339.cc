// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

/**
 * @pre  n >= 0
 * @post retorna cert si n és un número entrepà, fals en cas contrari
 */
bool is_sandwich(int n)
{
    int bread = n % 10;
    bool is_sandwich = true;
    
    n /= 10;
    if (n > 0 and n % 10 != bread)
    {
        int ham = n % 10;
        while (n > 0 and n % 10 == ham)
        {
            n /= 10;
        }
        if ((n > 0 and n <= 9) and n % 10 == bread) is_sandwich = true;
        else is_sandwich = false;
        
    }
    else
        is_sandwich = false;
    
    return is_sandwich;
}

// int main()
// {
//     int n;
//     while (cin >> n)
//     {
//         cout << is_sandwich(n) << endl;
//     }
// }