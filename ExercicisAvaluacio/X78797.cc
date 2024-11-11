// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int main()
{
    int height, width;

    while (cin >> height >> width)
    {
        while (height > 0)
        {
            // up
            int j = 0;
            while (j <= (width/2) and height > 0)
            {
                int ultimosChars = (width / 2) - j;
                for (int i = 0; i < j; i++) cout << '*';
                for (int i = 0; i < (width / 2); i++) cout << '#';
                for (int i = 0; i < ultimosChars; i++) cout << '*';
                cout << endl;
                
                ++j;
                --height;
            }
            // middle
            // if (height > 0)
            // {
            //     for (int i = 0; i < j; i++) cout << '*';
            //     for (int i = 0; i < (width / 2); i++) cout << '#';
            //     cout << endl;
            //     --height;
            // }
            // down
            --j;
            while (j > 1 and height > 0)
            {
                --j;
                int ultimosChars = (width / 2) - j;
                for (int i = 0; i < j; i++) cout << '*';
                for (int i = 0; i < (width / 2); i++) cout << '#';
                for (int i = 0; i < ultimosChars; i++) cout << '*';
                cout << endl;
                
                --height;
            }
        }
        cout << endl;
    } 
}