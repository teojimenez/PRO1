// Sembles més jove

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    string x;

    int years;
    string name;
    while (cin >> x)
    {

        if (x == "is")
            cin >> name;
        else if (x == "am")
            cin >> years;
        else if (x == "old.")
            cout << name << ", " << "you look younger. I thought you were " << years - (years / 10) << " years old." << endl;
    }
}