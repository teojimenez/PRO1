// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

char lletra_mes_frequent(const string& s) {
    char letra = ' ';
    int frequencia = 0;

    for (int i = 0; i < s.length(); i++) {
        int count = 0;

        for (int j = 0; j < s.length(); j++)
            if (s[i] == s[j]) count++;

        if (frequencia < count || (frequencia == count && letra > s[i])) {
            letra = s[i];
            frequencia = count;
        }
    }

    return letra;
}


// int main()
// {
//     string str = "fantastics";
//     cout << lletra_mes_frequent(str) <<  endl;
// }

int main()
{
    int n;
    cin >> n;
    vector <string> vec(n);
    double media = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        media += vec[i].length();
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    media /= n;
    cout << media << endl;
    for (int i = 0; i < n; i++)
    {
        if (vec[i].length() >= media)
            cout << vec[i] << ": " << lletra_mes_frequent(vec[i]) << endl;
    }
    
    
}