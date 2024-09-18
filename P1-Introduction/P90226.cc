// Comparison of words
#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if( s1 == s2) cout << s1 << " = " << s2 << endl;
    else cout << s1 << ((s1 > s2) ? " > " : " < ") << s2 << endl;
}