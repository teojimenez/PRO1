// Looking for an a

// reads a sequence of characters ended in a dot and tells if has a 'a'
// input: sequence of characters ended in ‘.’.
// output: Print “yes” or “no” depending on whether ‘a’ appears

#include <iostream>
using namespace std;

int main()
{
    // ESQUEMA A SEGUIR
    char character;

    cin >> character;
    while (character != 'a' and character != '.') 
        cin >> character;
    if (character == 'a') cout << "yes" << endl;
    else cout << "no" << endl;
}