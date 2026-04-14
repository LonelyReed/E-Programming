#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m;
	cin >> m;

	vector<int> days(m);
	int total = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> days[i];
		total += days[i];
	}

	int mid_day = (total + 1) / 2;

	int cruent_days = 0;
	int cruent_month = 0;
	for (int i = 0; i < m; i++)
	{
		cruent_days += days[i];

		if (cruent_days >= mid_day)
		{
			cruent_days -= days[i];
			cruent_month = i+1;
			break;
		}
	}

	/*int cruent_day = 0;
	for (int i = 1; i <= days[cruent_days]; i++)
	{
		cruent_days++;
		if (cruent_days == mid_day)
		{
			cruent_day = i;
			break;
		}
	}*/

	int cruent_day = mid_day - cruent_days;

	cout << cruent_month << " " << cruent_day;


	return 0;
}