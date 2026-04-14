#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,x;
	cin >> n>> x;

	vector<int> scores(n-1);
	vector<int> original(n-1);


	for (int i = 0; i < n - 1; i++)
	{
		cin >> scores[i];
		original[i] = scores[i];
	}

	int ans = -1;

	for (int i = 0; i <= 100; i++)
	{
		scores = original;

		scores.push_back(i);
		sort(scores.begin(), scores.end());
		
		int sum = 0;
		for (int j = 1; j < n - 1; j++)
		{
			sum += scores[j];
		}

		if (sum >=  x)
		{
			ans = i;
			cout << ans;
			break;
		}
	}

	if (ans == -1)
	{
		cout << -1;
	}

	return 0;
}