#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,q;
	cin >> n>>q;

	vector<long long> xs;
	vector<long long> ys;

	for (long long i = 0; i < n; i++)
	{
		xs[i] = i + 1;
	}

	for (long long t = 0; t < q; t++)
	{
		int condition;
		cin >> condition;
		if (condition == 1)
		{
			char dir;
			cin >> dir;

			if (dir == 'R')
			{

			}
		}
	}








	return 0;
}

