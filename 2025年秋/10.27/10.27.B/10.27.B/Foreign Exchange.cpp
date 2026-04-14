#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	vector<long long> a(n);

	vector<long long> s(n);
	vector<long long> t(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n-1; i++)
	{
		cin >> s[i] >> t[i];
	}

	for (int i = 0; i < n-1; i++)
	{
		/*while (a[i] >= s[i])
		{
			a[i] -= s[i];
			a[i + 1] += t[i];
		}*/

		long long times = a[i] / s[i];
		a[i] -= times * s[i];
		a[i + 1] += times * t[i];
	}

	cout << a[n-1];

	return 0;
}
