#include <iostream>
#include <vector>
typedef long long ll;

int main()
{
	ll n, m, t;
	std::cin >> n >> m >> t;

	//移动消耗时间
	std::vector<ll> consums(n + 1, 0);
	//奖励房间
	std::vector<ll> rewards(n + 1, 0);

	for (ll i = 1; i < n; i++)
	{
		std::cin >> consums[i];
	}
	for (ll i = 1; i <= m; i++)
	{
		ll x, y;
		std::cin >> x >> y;
		consums[x] = y;
	}

	bool reach = true;
	//位置指针
	ll pos = 1;
	while (pos < n)
	{
		//加上奖励
		t += rewards[pos];

		//判断能否到达下一个房间
		if (t < consums[pos])
		{
			reach = false;
			break;
		}

		t -= consums[pos];
		pos++;
	}

	if (reach)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	return 0;
}