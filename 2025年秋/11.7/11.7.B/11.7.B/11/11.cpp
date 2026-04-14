#include <iostream>
using namespace std;

int main()
{
	int month;
	cin >> month;

	int days[100] = { 0 };
	for (int i = 0; i < month; i++)
	{
		cin >> days[i];
	}

	int total = 0;
	for (int i = 0; i < month; i++)
	{
		int number = (i+1) % 10;
		if (i+1 == number || i+1==number * 10 + number)
		{
			if (number <= days[i])
			{
				total++;
			}
			if (number + number * 10 <= days[i])
			{
				total++;
			}
		}
	}

	cout << total;

	return 0;
}