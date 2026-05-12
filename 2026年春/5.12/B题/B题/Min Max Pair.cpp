#include <iostream>
#include <vector>
typedef long long ll;

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> numbers(n+1);
	for (int i = 1; i <= n; i++)
	{
		std::cin >> numbers[i];
	}

	ll total = 0;

	ll equal = 0;
	//先计算索引等于值的情况
	for (int i = 1; i <= n; i++)
	{
		if (numbers[i] == i)
		{
			equal++;
		}
	}

	ll exchange = 0;
	//再计算索引与值互换的情况
	for (int i = 1; i <= n; i++)
	{
		//排除了索引与值相等的情况，并且对于互换以后的一对数只统计了一次
		if (numbers[i] > i && numbers[numbers[i]] == i)
		{
			exchange++;
		}
	}

	total = equal * (equal - 1) / 2 + exchange;
	std::cout << total;

	return 0;
}
