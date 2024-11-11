// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void reverse_string(int &n)
{
    string str;

    if (cin >> str)
    {
        reverse_string(n);
        if (n > 0)
        {
            n--;
            cout << str << endl;
        }
    }
}

int main()
{
    int n;

    cin >> n;
    reverse_string(n);
}