#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long x;
	cin >> x;

	long long number=x/10;

	if (x>0)
	{
		if (x-10*number>0 )
		{
			cout << number+1;
		}

		else
		{
			cout << number ;
		}
	}

	else if (x == 0)
	{
		cout << x;
	}

	else
	{
		cout << number;
	}
	return 0;
}