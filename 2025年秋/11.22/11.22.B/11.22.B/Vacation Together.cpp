#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, d;
	cin >> n >> d;

	vector<string> schedule(n);
	for (int i = 0; i < n; i++)
	{
		cin >> schedule[i];
	}

	vector<int> free(d);
	for (int j = 0; j < d; j++)
	{
		bool judge = true;
		for (int i = 0; i < n; i++)
		{
			if (schedule[i][j] == 'x')
			{
				judge = false;
				break;
			}
		}

		if (judge)
		{
			free[j] = 1;
		}
		else
		{
			free[j] = 0;
		}
	}

	int max_day = 0;
	int continued_day = 0;
	int relative_pos = 0;
	for (int k = 0; k < d; k++)
	{/*
		if (free[k] == 1&& relative_pos == continued_day)
		{
			relative_pos++;
			continued_day++;
		}
		else
		{
			if (continued_day > max_day)
			{
				max_day = continued_day;
			}

			continued_day = 0;
			relative_pos = 0;
		}*/

		if (free[k] == 1 && relative_pos == continued_day)
		{
			relative_pos++;
			continued_day++;

			if (continued_day >= max_day)
			{
				max_day = continued_day;
			}
		}
		else
		{
			continued_day = 0;
			relative_pos = 0;
		}
	}

	cout << max_day;

	return 0;
}