#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, h, x;
	cin >> n >> h >> x;

	vector<int> medicines(n);
	int point = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> medicines[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (medicines[i] + h >= x)
		{
			point = i+1;
			break;
		}
	}

	cout << point;


	return 0;
}