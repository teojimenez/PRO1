// Com la suma dels demés (II)

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        vector<int> vec(n);

        int suma = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            cin >> vec[i];
            suma += vec[i];
        }
        bool encontrado = false;

        int i = -1;
        while (!encontrado and ++i < vec.size())
        {
            if (suma - vec[i] == vec[i]) encontrado = true;
        }

        if (encontrado) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
