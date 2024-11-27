// Classification of characters
// Reads a letter, and that tells if it is an uppercase  or a lowercase letter,
// and that also tells if it is a vowel or a consonant.
// input: letter
// output: is uppercase or lowercase and vowel or consonant
#include <iostream>
using namespace std;

int main()
{
    char c;
    string letterType, caseType;
    cin >> c;
    //Choosing the letter type and the case type
    if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or 
       c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') letterType = "vowel";
    else letterType = "consonant";

    if (c >= 'a' and c <= 'z') caseType = "lowercase";
    else caseType = "uppercase";
    // printing the results
    cout << caseType << endl << letterType << endl;
}