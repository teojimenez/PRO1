// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

bool conte(string s1, string s2)
{
    int i = -1, j = 0;
    bool trobat = false;

    while (++i < s1.length() && not trobat)
    {
        if (s1[i] == s2[j])
        {
            while (s1[i] == s2[j] and i < s1.length() and j < s2.length())
            {
                i++;
                j++;
            }
            if (j == s2.size()) trobat = true;
            else j = 0;
        }
    }
    return trobat;
}

int main()
{
    int n;

    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << ':';
        int j = -1;
        while (++j < n)
        {
            if (vec[i].size() >= vec[j].size() && conte(vec[i], vec[j]))
                cout << ' ' << vec[j];
        }
        cout << endl;
        
    }
    
    
}