#include <iostream>
using namespace std;

int main()
{
	int n, k;
	int numbers[100];

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int number = 0;
		cin >> number;
		numbers[i] = number;
	}

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] % k==0)
		{
			cout << numbers[i] / k << ' ';
		}
	}



	return 0;
}