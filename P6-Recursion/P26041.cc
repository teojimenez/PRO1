// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void reverse_string()
{
    string str;
    
    if (cin >> str)
    {
        reverse_string();
        cout << str << endl;
    }
}

int main()
{
    reverse_string();
}