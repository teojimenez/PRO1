// Consecutive repeated words

// agafar la primera paraula i veure quin es el n maxim que es repeteix
// input: sequencia de paraules
// output: numero maxim de vegades que es repeteix la primera paraula

#include <iostream>
using namespace std;

int main()
{
    string str;
    
    string firstWord;
    cin >> firstWord;

    int max = 1;
    int count = 1;
    while (cin >> str)
    {
        //reiniciar el count
        if (str != firstWord) count = 0;
        else{
            if (++count > max) max = count;
        }
        
    }
    cout << max << endl;
}