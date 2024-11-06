// Posicions d'un maxim a dues sequencies

// 
// input: 
// output: 

#include <iostream>
using namespace std;

void infoSequencia(int& max, int& lpos)
{
    int seq, pos = 1;
    cin >> seq;

    max = seq;
    lpos = pos;

    while (seq != 0)
    {
        if (seq >= max)
        {
            max = seq;
            lpos = pos;
        }
        pos++;
        cin >> seq;
    }
}

int main() {
    int max1, lpos1, lpos2, seq, pos = 1;

    infoSequencia(max1, lpos1);

    bool found = false;

    cin >> seq;
    while (!found && seq != 0) {
        if (seq == max1) {
            found = true;
            lpos2 = pos;
        }
        pos++;
        cin >> seq;
    }

    while (seq != 0) cin >> seq;

    if (!found) cout << max1 << ' ' << lpos1 << " -" << endl;
    else cout << max1 << ' ' << lpos1 << ' ' << lpos2 << endl;
}