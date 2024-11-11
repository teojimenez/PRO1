// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    bool result = false;

    // 1 1 0 3
    if (n1 == n2 and n1 != n3 and n1 != n4 and n3 != n4) result = true;
    // 1 0 1 3
    else if (n1 == n3 and n1 != n2 and n1 != n4 and n2 != n4) result = true;
    // 0 1 3 1
    else if (n2 == n4 and n2 != n1 and n2 != n3 and n1 != n3) result = true;
    // 0 1 1 3
    else if (n2 == n3 and n2 != n1 and n2 != n4 and n1 != n4) result = true;
    // 1 0 3 1
    else if (n1 == n4 and n1 != n2 and n1 != n3 and n2 != n3) result = true;
    // 0 3 1 1
    else if (n3 == n4 and n3 != n1 and n3 != n2 and n1 != n2) result = true;

    if (result) cout << "YES" << endl;
    else cout << "NO" << endl;
}