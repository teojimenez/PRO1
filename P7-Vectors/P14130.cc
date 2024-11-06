// Igual a l'últim

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cin >> n;
    
    //tamany tenint en compte el espai 0
    //exemple n = 7
    // 0 -> 6
    vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++) cin >> vec[i];

    int count = 0;

    //-1 perque no conti el ultim
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] == vec[n - 1]) ++count;
    }

    cout << count << endl;
}
