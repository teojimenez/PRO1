// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    string firstWord = "", secondWord = "", actualWord;

    while (cin >> actualWord)
    {
        if (actualWord > firstWord)
        {
            secondWord = firstWord;
            firstWord = actualWord;
        }
        //per evitar repeticions
        else if (actualWord > secondWord  and firstWord != actualWord)
            secondWord = actualWord;
    }

    cout << secondWord << endl;
}