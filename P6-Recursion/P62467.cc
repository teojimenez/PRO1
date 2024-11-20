// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int my_pow(int elevado, int n)
{
    int result;
    if (elevado < 2) result = 0;
    else result = (n * elevado) + my_pow(elevado - 1, n);

    return result;
}

void asteriscs(int n)
{
    // int pow = my_pow(n, 2);
    if (n > n/2)
    {
        cout << '*' << endl;
        --n;
        while (n > 0) cout << '*';
    }
}

int main()
{
    int n;

    cin >> n;
    cout << my_pow(n, 2) << endl;
}