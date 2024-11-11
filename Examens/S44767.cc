// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

// int card_value(char c)
// {
//     int value = 10;

//     if (c >= 'A' and c <= 'K' )
//     {
//         if (c == 'A') value = 14;
//         else if (c == 'K') value = 13;
//         else if (c == 'Q') value = 12;
//         else if (c == 'J') value = 11;
//     }
//     else if (c >= '2' and c <= '9') value = c - '0';
//     return value;
// }

bool better_card(char c1, char c2)
{
    int value1 = 0, value2 = 0;

    if (c1 == 'A') value1 = 14;
    else if (c1 == 'K') value1 = 13;
    else if (c1 == 'Q') value1 = 12;
    else if (c1 == 'J') value1 = 11;
    else if (c1 == '0') value1 = 10;
    else value1 = c1 - '0';

    if (c2 == 'A') value2 = 14;
    else if (c2 == 'K') value2 = 13;
    else if (c2 == 'Q') value2 = 12;
    else if (c2 == 'J') value2 = 11;
    else if (c2 == '0') value2 = 10;
    else value2 = c2 - '0';

    return value1 > value2;
}


// int main()
// {
//     cout << better_card('4', '4') << endl;
//     cout << better_card('A', 'K') << endl;
//     cout << better_card('2', '9') << endl;
//     cout << better_card('Q', '8') << endl;
//     cout << better_card('0', 'K') << endl;
//     cout << better_card('0', '5') << endl;
// }