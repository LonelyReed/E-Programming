#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int max_level = 0;
	vector<int> level(n);
	for (int i = 0; i < n; i++)
	{
		cin >> level[i];

		if (i!=0 && level[i] > max_level)
		{
			max_level = level[i];
		}
	}

	if (level[0] == max_level)
	{
		cout << 1;
	}
	else if (level[0] > max_level)
	{
		cout << 0;
	}
	else
	{
		cout << max_level + 1 - level[0];
	}

	return 0;
}