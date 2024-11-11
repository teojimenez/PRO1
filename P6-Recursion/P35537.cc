// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

bool es_creixent(int n)
{
    if (n == 0) return true;
    if (n % 10 >= (n / 10) % 10)
    {
        return es_creixent(n/10);
    }
    else 
        return false;


}

// int main()
// {
//     cout << es_creixent(123378) << endl;
// }