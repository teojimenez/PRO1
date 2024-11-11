// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;


int main()
{
    char c, anterior;
    int count = 1;

    cin >> anterior;
    if (anterior != '.') cin >> c;
    else c = anterior;
    
    while (c != '.')
    {
        if (anterior == c) ++count;
        else
        {
            if (count > 1)
            {
                if (count == 2) cout << "Parella de " << anterior <<  's' << endl;
                else if (count == 3) cout << "Trio de " << anterior <<  's' << endl;
                else if (count == 4) cout << "Poker de " << anterior <<  's' << endl;
                else if (count > 4) cout << count << ' ' << anterior <<  "s!" << endl;
            }
            count = 1;
        }
        anterior = c;
        cin >> c;
    }
    if (count == 2) cout << "Parella de " << anterior <<  's' << endl;
    else if (count == 3) cout << "Trio de " << anterior <<  's' << endl;
    else if (count == 4) cout << "Poker de " << anterior <<  's' << endl;
    else if (count > 4) cout << count << ' ' << anterior <<  "s!" << endl;
}