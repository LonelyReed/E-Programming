#include <iostream>

int A[120], B[120];

int main()
{
	int n, m;
	std::cin >> n >> m;

    //输入所有问题对应的分值
	for (int i = 1; i <= n; i++)
	{
		std::cin >> A[i];
	}

	//输入解决的问题题号
	for (int i = 1; i <= m; i++)
	{
		std::cin >> B[i];
	}

	//计算得分总和
	int sum = 0;
	for (int i = 1; i <= m; i++)
	{
		int score = A[B[i]];
		sum += score;
	}

	std::cout << sum;

	return 0;
}