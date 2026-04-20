#include <iostream>
typedef long long ll;
const int N = 110;

//使用一个数组来存储答案
int main()
{
	int t;
	std::cin >> t;

	int n, output[N] = { 0 };
	ll input[N];

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::cin >> input[j];
			//判断是否为奇数
			if (input[j] % 2 != 0)
			{
				output[i]++;
			}
		}
	}

	for (int i = 0; i < t; i++)
	{
		std::cout << output[i] << std::endl;
	}

	return 0;
}