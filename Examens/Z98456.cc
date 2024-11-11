// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;


int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (i != j)
            {
                int k = 1;
                while (k < n)
                {
                    for (int w = 0; w < k; w++) cout << i;
                    for (int w = 0; w < (n - k); w++) cout << j;
                    cout << endl;
                    k++;
                }
            }
        }
        
    }
    
}