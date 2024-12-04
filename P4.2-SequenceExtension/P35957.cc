// 

// 
// input: 
// output: 

#include <iostream>
using namespace std;

int digits(int x)
{
  int count = 0;
  while (x > 0) 
  {
    x /= 10;
    ++count;
  }
  return count;
}

int central(int x)
{
  if (x < 10) return x;
  int count = 1;
  int n = digits(x)/2 + 1;
  while (count < n)
  {
    x /= 10;
    ++count;
  }
  x %= 10;
  return x;
}

int main()
{
    int a, b;

    int n;
    cin >> n;


    bool segueix = true;
    char result = '=';

    int i = 0;
    int middle;

	while (segueix and i < (n*2))
	{
    	cin >> a >> b;
		if (i == 0) middle = central(a);

		if (digits(a) % 2 == 0 and digits(a) > 1)
		{
			segueix = false;
			result = 'B';
		}
		else if (digits(b) % 2 == 0 and digits(b) > 1)
		{
			segueix = false;
			result = 'A';
		}
		else if (central(b) != middle)
		{
			segueix = false;
			result = 'A';
		}
		else if (central(a) != middle)
		{
			segueix = false;
			result = 'B';
		}
		i += 2;
	}
	cout << result << endl;
}