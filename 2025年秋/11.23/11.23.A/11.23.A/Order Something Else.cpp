#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, p, q;
	cin >> n >> p >> q;


	int min_cost = p;
	vector<int> meals(n);
	for (int i = 0; i < n; i++)
	{
		cin >> meals[i];

		if (meals[i] + q < min_cost)
		{
			min_cost = meals[i] + q;
		}
	}

	cout << min_cost;

	return 0;
}