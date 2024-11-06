// Words between two words

// palabras entre beginning y bye
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    string str;
    
    int count = 0,countingBool = false;
    while (cin >> str && str != "end")
    {
        if (countingBool) ++count;
        else if (str == "beginning") countingBool = true;
        else if (str == "end") countingBool = false;
    }
    if (str != "end" or not countingBool) cout << "wrong sequence" << endl;
    else cout << count << endl;
}