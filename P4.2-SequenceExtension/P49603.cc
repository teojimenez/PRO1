// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, lastLine = 0;

    while (cin >> n)
    {
        bool biggerThan = true;
        int i = -1;
        string last = "";

        while (biggerThan and ++i < n)
        {
            string actual;
            cin >> actual;
            if (last > actual) biggerThan = false;

            last = actual;
        }
        ++count;
        if (biggerThan) lastLine = count;
        // leer palabras no leidas porque ya no esta en orden
        while (++i < n)
        {
            string actual;
            cin >> actual;
        }
    }

    if (lastLine != 0) cout << "The last line in increasing order is " << lastLine << '.' << endl;
    else cout << "There is no line in increasing order." << endl;
}