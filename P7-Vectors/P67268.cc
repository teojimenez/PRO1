// Reverse of sequences

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        vector<int> vec(n);

        for (int i = 0; i < vec.size(); i++) cin >> vec[i];
        for (int i = n - 1; i >= 0; i--)
        {
            if (i != n - 1) cout << ' ';
            cout << vec[i];
        }
        cout << endl;
    }
}
