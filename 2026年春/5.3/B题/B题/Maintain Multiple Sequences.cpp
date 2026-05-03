#include <iostream>
#include <vector>

int main()
{
	int n, q;
	std::cin >> n >> q;

	//存储数组
	std::vector<std::vector<int>> numbers(n);
	//查询数组
	std::vector<std::vector<int>> check(q);

	for (int i = 0; i < n; i++)
	{
		int l;
		std::cin >> l;
		for (int j = 0; j < l; j++)
		{
			int number;
			std::cin >> number;
			numbers[i].push_back(number);
		}
	}

	for (int i = 0; i < q; i++)
	{
		int s,t;
		std::cin >> s >> t;
		check[i].push_back(s);
		check[i].push_back(t);
	}

	for (int i = 0; i < q; i++)
	{
		int s = check[i][0];
		int t = check[i][1];
		std::cout << numbers[s - 1][t - 1] << std::endl;
	}

	return 0;
}