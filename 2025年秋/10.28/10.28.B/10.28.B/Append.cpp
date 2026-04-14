#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int q;
	cin >> q;

	long long number;
	int order;

	vector<long long> a;
	vector<long long> result;

	for (int i = 0; i < q; i++)
	{
		cin >> order >> number;
		if (order == 1)
		{
			a.push_back(number);
		}
		else if (order == 2)
		{
			result.push_back( a[a.size() - number]);
		}
	}

	for (long long num : result)
	{
		cout << num <<endl;
	}

	return 0;
}
