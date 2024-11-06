// Invertint paraules (2)

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = vec[i].length() - 1 ; j >= 0; j--)
        {
            cout << vec[i][j];
        }
        cout << endl;
    }
}
