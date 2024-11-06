// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y)
{
    int count = 0;
    int j = 0;
    for (int i = 0; i < X.size(); i++)
    {
        bool trobat = false;
        while (j < Y.size() and not trobat)
        {
            if (Y[j] > X[i]) trobat = true;
            else if (Y[j] == X[i])
            {
                ++count;
                trobat = true;
            }

            if (Y[j] <= X[i]) ++j;
        }
    }
    return count;
}

int main()
{

    vector<int> X;
    vector<int> Y;

    // X.push_back(3);
    // X.push_back(5);
    // X.push_back(7);
    // X.push_back(8);

    // Y.push_back(2);
    // Y.push_back(3);
    // Y.push_back(7);
    // Y.push_back(9);
    // Y.push_back(10);
    // 2

    // X.push_back(1);
    // X.push_back(2);
    // X.push_back(3);
    // X.push_back(4);
    // X.push_back(5);

    // Y.push_back(3);
    // Y.push_back(4);
    // Y.push_back(5);
    // Y.push_back(6);
    // Y.push_back(7);
    // Y.push_back(8);
    // 3


    // X.push_back(1);
    // X.push_back(2);
    // X.push_back(3);
    // X.push_back(4);
    // X.push_back(5);

    // Y.push_back(8);
    // Y.push_back(9);
    // 0

    cout << elements_comuns ( X, Y) << endl;
}