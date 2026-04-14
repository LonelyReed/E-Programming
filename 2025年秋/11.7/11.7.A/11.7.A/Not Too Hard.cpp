#include <iostream>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	int scores[8];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];

		if (scores[i] <= x)
		{
			sum += scores[i];
		}
	}

	cout << sum;

	return 0;
}