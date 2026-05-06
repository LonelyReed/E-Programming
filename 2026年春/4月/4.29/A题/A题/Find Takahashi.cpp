#include <iostream>
const int N = 110;
typedef long long ll;

int main()
{
	int n;
	std::cin >> n;
	ll numbers[N] = { 0 };

	for (int i = 0; i < n; i++)
	{
		std::cin >> numbers[i];
	}

	//找最大值的索引
	int maxnumber = 0;
	for (int i = 0; i < n; i++)
	{
		if (numbers[maxnumber] < numbers[i])
		{
			maxnumber = i;
		}
	}

	std::cout << maxnumber + 1;

	return 0;
}