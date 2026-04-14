#include <iostream>
using namespace std;

int main()
{
	int n, l;
	int scores[1000];
	int numbers=0;

	cin >> n >> l;

	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];

		if (scores[i] >= l)
		{
			numbers++;
		}
	}

	cout << numbers;


	return 0;
}