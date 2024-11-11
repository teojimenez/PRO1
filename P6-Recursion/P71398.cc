// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim)
{
    if (n < 10)
        maxim = minim = n;
    else
    {
        digit_maxim_i_minim(n / 10, maxim, minim);
        
        if (n % 10 > maxim) maxim = n % 10;
        else if (n % 10 < minim) minim = n % 10;
    }
}

// int main()
// {
//     int n = 1704, minim, maxim;
    
//     digit_maxim_i_minim(n, maxim, minim);

//     cout << minim << maxim << endl;
// }