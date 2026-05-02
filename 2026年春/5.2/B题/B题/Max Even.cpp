#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main()
{
	int n;
	std::cin >> n;

	//原数组
	std::vector<ll> numbers(n);
	//奇数数组
	std::vector<ll> odds;
	//偶数数组
	std::vector<ll> evens;

	for (int i = 0; i < n; i++)
	{
		std::cin >> numbers[i];

		if (numbers[i] % 2 == 0)
		{
			evens.push_back(numbers[i]);
		}
		else
		{
			odds.push_back(numbers[i]);
		}
	}

	//降序排序
	std::sort(odds.rbegin(), odds.rend());
	std::sort(evens.rbegin(), evens.rend());

	size_t oddslen = odds.size();
	size_t evenslen = evens.size();

	/*if (n == 1)
	{
		std::cout << -1;
	}
	else
	{
		if (oddslen == 1 && evenslen == 1)
		{
			std::cout << -1;
		}
		else
		{
			ll oddsmaxsum = odds[oddslen - 1] + odds[oddslen - 2];
			ll evensmaxsum = evens[evenslen - 1] + evens[evenslen - 2];

			if (oddsmaxsum >= evensmaxsum)
			{
				std::cout << oddsmaxsum;
			}
			else
			{
				std::cout << evensmaxsum;
			}
		}
	}*/

	ll oddsum = -1, evensum = -1;
	if (oddslen >= 2)
	{
		oddsum = odds[0] + odds[1];
	}
	if (evenslen >= 2)
	{
		evensum = evens[0] + evens[1];
	}

	ll result = std::max(oddsum, evensum);
	std::cout << result;

	return 0;
}