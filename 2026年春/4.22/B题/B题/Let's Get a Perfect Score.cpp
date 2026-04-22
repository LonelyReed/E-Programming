#include <iostream>
#include <string>
const int N = 32;

std::string com[N];

//配对函数
bool Match(std::string S, std::string T,int m)
{
	int xnum = 0;
	int onum = 0;
	for (int i = 0; i < m; i++)
	{
		if (S[i] == 'o')
		{
			onum++;
		}
		//只关注S中为x的地方，去匹配T中相同的地方是不是o
		else if (S[i] == 'x' && T[i] == 'o')
		{
			xnum++;

		}
	}

	if (xnum + onum == S.length())
	{
		return true;
	}
	return false;
}

int main()
{
	int n, m, result = 0;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		std::cin >> com[i];
	}

	//逐个对比
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Match(com[i], com[j], m))
			{
				result++;
			}
		}
	}

	std::cout << result;

	return 0;
}