// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int lines, width, segment;

    while (cin >> lines >> width >> segment)
    {
        while (lines > 0)
        {
            // up and middle
            int j = 0;
            while (j < (segment + 1) and lines > 0)
            {
                for (int i = 0; i < j; i++) cout << ' ';
                for (int i = 0; i < width; i++) cout << '*';
                cout << endl;
                
                ++j;
                --lines;
            }
            // down
            while (j - 1 > 1 and lines > 0)
            {
                --j;
                for (int i = 0; i < j - 1; i++) cout << ' ';
                for (int i = 0; i < width; i++) cout << '*';

                cout << endl;
                
                --lines;
            }
        }
        cout << endl;
    } 
}