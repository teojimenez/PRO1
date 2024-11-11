// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void reverse_string()
{
    string str;
    cin >> str;
    if (str != "fi")
    {
        reverse_string();
        cout << str << endl;
    }
}

int main()
{
    reverse_string();
}