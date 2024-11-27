// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

bool conte(string s1, string s2) {
    bool hies = false;
    int i = 0;

    while (i <= s1.length() - s2.length() && !hies) {
        int cont = 0, j = 0;

        while (j < s2.length() && s1[i + j] == s2[j]) {
            ++cont;
            ++j;
        }

        if (cont == s2.length()) {
            hies = true;
        } else {
            ++i;
        }
    }


    return hies;
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
            if (vec[i].size() >= vec[j].size() and conte(vec[i], vec[j]))
                cout << ' ' << vec[j];
        }
        cout << endl;
    }
}