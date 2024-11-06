// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int k, n, m;

    cin >> k >> n >> m;

    for (int i = 0; i < k; i++)
    {
        int count = 9;
        if (i != 0) cout << endl;
        for (int j = 0; j < n; j++)
        {
            for (int w = 0; w < m; w++)
            {
                cout << count;
                --count;
                if (count < 0) count = 9;
            }
            cout << endl;
        }
    }
    
}