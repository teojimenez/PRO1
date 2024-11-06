// 

// 
// input: 
// output: 

#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2)
{
    vector<int> full(v1.size() + v2.size());

    int w = -1;
    for (int i = 0; i < v1.size(); i++) full[++w] = v1[i];
    for (int i = 0; i < v2.size(); i++) full[++w] = v2[i];
    return full;
}

int main()
{
        vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    
    vector<int> v2;
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);
    

    concatenacio(v1, v2);
}