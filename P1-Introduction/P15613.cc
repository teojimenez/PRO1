// Temperatures 
// print text depending on the temperature in celsius
// input: Input consists of an integer number
// output: print a line depending on the temperature
#include <iostream>
using namespace std;

int main()
{
    int temperature;
    cin >> temperature;
    //depending on the temperature, it prints differents outputs
    if (temperature < 10)
    {
        cout << "it's cold" << endl;
        if (temperature <= 0) cout << "water would freeze" << endl;
    }
    else if (temperature < 31 && temperature > 9) cout << "it's ok" << endl;
    else
    {
        cout << "it's hot" << endl;
        if (temperature >= 100) cout << "water would boil" << endl;
    }
}