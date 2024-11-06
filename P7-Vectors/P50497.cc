// Is it a palindrome?

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

bool is_palindrome(const string& s)
{
    // int size = s.length() / 2;
    // vector<char> esquerra(size);
    // vector<char> dreta(size);

    int i = 0;
    int j = s.length() - 1;
    bool erroneo = false;
    while (i < s.length() / 2 and !erroneo)
    {
        if (s[j] != s[i]) erroneo = true;
        ++i;
        --j;
    }
    // for (int i = 0; i < s.length() / 2; i++)
    // {
    //     esquerra[i] = s[i];
    //     dreta[i] = s[j];
    //     --j;
    // }
    // return esquerra == dreta;
    return !erroneo;
}

int main()
{
    cout << is_palindrome("aac") << endl;
}
