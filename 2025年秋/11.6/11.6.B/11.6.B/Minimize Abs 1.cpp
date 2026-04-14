#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long n, l, r;
	cin >> n >> l >> r;

	//要使|xi-ai|<|yi-ai|
	//则xi到ai的距离小于任意yi到ai的距离

	vector<long long> min(n);
	long long number=0;
	for (int i = 0; i < n; i++)
	{
		cin >> number;

		if (number <= l)
		{
			min[i] = l;
		}
		else if (number > l && number < r)
		{
			min[i] = number;
		}
		else
		{
			min[i] = r;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << min[i] << " ";
	}




	return 0;
}