// Control C201A

//  natural number is called cool if the sum of the digits which are
//  in odd positions (starting to count on the right) is an even number
//  oposite, then is NOT COOL NUMBER
// input: natural number.
// output: Print the number reversed

#include <iostream>
using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    cout << n;
    
    // adding the odd digits to result
    for (int i = 0; n > 0; i++)
    {
        if(i % 2 == 0)
        {
            result += n % 10;
        }
        n /= 10;
    }
    // printing the result depending if the results is odd or even
    if (result % 2 == 0) cout << " IS COOL" << endl;
    else cout << " IS NOT COOL" << endl;
}