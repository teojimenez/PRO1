// Parentheses

// posar si tanquen be els parentesis
// input: sequencia parentesis
// output: yes o no si tanquen be o no

#include <iostream>
using namespace std;

int main()
{
    char c;

    int count = 0;
    while (cin >> c and count >= 0)
    {
        if(c == '(') ++count;
        else if(c == ')') --count;
    }
    if (count != 0) cout << "no" << endl;
    else cout << "yes" << endl;
}