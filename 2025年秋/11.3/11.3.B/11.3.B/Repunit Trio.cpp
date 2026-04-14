#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	long long numbers[20];
	numbers[0] = 1;
	for (int i = 1; i < 20; i++)
	{
		numbers[i] = numbers[i - 1] * 10 + 1;
	}

	long long number;

	int times = 0;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			for (int k = 0; k <=j; k++)
			{
				times++;
				if (times == n)
				{
					number = numbers[i] + numbers[j] + numbers[k];
					cout << number << endl;
					return 0;
				}
			}
		}
	}

	return 0;
}