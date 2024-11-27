// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

struct Time {
    int hour, minute, second;
};

void one_second(const Time& t, Time& t1, Time& t2)
{
    // t1 add one second
    t1.second = (t.second + 1) % 60;
    t1.minute = (t.minute + (t1.second == 0)) % 60;
    t1.hour = (t.hour + (t1.minute == 0 and t1.second == 0)) % 24;
    
    // t2 substract one second
    t2.second = (t.second - 1 + 60) % 60;
    t2.minute = (t.minute - (t2.second == 59) + 60) % 60;
    t2.hour = (t.hour - (t2.minute == 59 && t2.second == 59) + 24) % 24;

}

int main()
{
    struct Time t, t1, t2;
    
    while (cin >> t.hour >> t.minute >> t.second)
    {
        one_second(t, t1, t2);
        cout << t1.hour << ' ' << t1.minute << ' ' << t1.second << endl;
        cout << t2.hour << ' ' << t2.minute << ' ' << t2.second << endl;
    }
}