#include <iostream>
#include <vector>
typedef long long ll;

//暴力枚举——超时
//int main()
//{
//	int n, m;
//	std::cin >> n >> m;
//
//	std::vector<int> numbers(n+1);
//	for (int i = 0; i < n; i++)
//	{
//		std::cin >> numbers[i];
//	}
//
//	int maxResult = 0;
//
//	for (int i = 0; i <= n - m; i++)
//	{
//		int tempResult = 0;
//		for (int j = 0; j < m; j++)
//		{
//			tempResult += (j + 1) * numbers[i + j];
//		}
//
//		if (tempResult > maxResult)
//		{
//			maxResult = tempResult;
//		}
//	}
//
//	std::cout << maxResult;
//
//	return 0;
//}

//使用前缀和
int main()
{
	int n, m;
	std::cin >> n >> m;

	std::vector<ll> numbers(n);
	std::vector<ll> prefix(n+1,0);
	std::vector<ll> prefixWeight(n+1,0);

	for (int i = 0; i < n; i++)
	{
		std::cin >> numbers[i];
	}

	//计算Sn和prefixSn的值
	for (int i = 1; i <= n; i++)		//从索引1开始，第一项也适用递推公式
	{
		prefix[i] += prefix[i - 1] + numbers[i-1];
		prefixWeight[i] += prefixWeight[i - 1] + i * numbers[i-1];
	}

	ll result = -1e18;
	for (int i = 1; i <= n - m + 1; i++)
	{
		ll temp = prefixWeight[i + m - 1] - prefixWeight[i - 1] - (i - 1) * (prefix[i + m - 1] - prefix[i - 1]);
		result = std::max(result, temp);
	}

	std::cout << result;

	return 0;
}