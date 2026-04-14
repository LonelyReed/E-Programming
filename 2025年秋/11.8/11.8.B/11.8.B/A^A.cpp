#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long A=0,B;
	cin >> B;

	/*for (int i = 1; i <= 18; i++)
	{
		if (pow(i, i) == B)
		{
			A = i;
		}
	}

	if (A)
	{
		cout << A;
	}
	else
	{
		cout << -1;
	}*/

	 
	for (long long i = 1; i < 16; i++)
	{
		long long number = 1;
		for (int j = 1; j <= i; j++)
		{
			number = number * i;
		}

		if (number == B)
		{
			A = i;
			break;
		}
	}

	if (A)
	{
		cout << A;
	}
	else
	{
		cout << -1;
	}


	return 0;
}