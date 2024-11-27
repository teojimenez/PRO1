// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main()
{
    char c;
    cin >> c;

    bool lletra = ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'));

    escriu_linia(c, "lletra", lletra);
    escriu_linia(c, "vocal", lletra and ((c == 'a' or c == 'i' or c == 'e' or c == 'u' or c == 'o') or (c == 'A' or c == 'I' or c == 'E' or c == 'U' or c == 'O')));
    escriu_linia(c, "consonant", lletra and (c != 'a' and c != 'i' and c != 'e' and c != 'u' and c != 'o' and c != 'A' and c != 'I' and c != 'E' and c != 'U' and c != 'O'));
    escriu_linia(c, "majuscula", (c >= 'A' and c <= 'Z'));
    escriu_linia(c, "minuscula", (c >= 'a' and c <= 'z'));
    escriu_linia(c, "digit", (c >= '0' and c <= '9'));
}