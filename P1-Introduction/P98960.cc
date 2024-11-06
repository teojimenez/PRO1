// Uppercase and lowercase letters

// reads a letter and prints it in lowercase if it was uppercase
// or prints it in uppercase if it was lowercase.
// input: letter
// output: lowercase if it was uppercase, or in uppercase if it was lowercase.
#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;


    if (c >= 'a' and c <= 'z') cout << char(c - ('a' - 'A')) << endl;
    else cout << char(c + ('a' - 'A')) << endl;
}