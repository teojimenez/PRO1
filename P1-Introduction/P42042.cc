// Classification of characters
#include <iostream>
using namespace std;

int main()
{
    char c;
    string x;
    cin >> c;
    if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') x = "vowel";
    else x = "consonant";

    cout << ((c >= 'a' && c <= 'z') ? "lowercase" : "uppercase") << endl << x << endl;
}