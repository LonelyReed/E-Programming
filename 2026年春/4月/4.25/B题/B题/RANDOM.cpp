#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//本题目的本质：对矩阵列的排列
int main()
{
	//输入
	int h, w;
	std::cin >> h >> w;
	std::vector<std::string> S(h), T(h);
	for (int i = 0; i < h; i++)
	{
		std::cin >> S[i];
	}
	for (int i = 0; i < h; i++)
	{
		std::cin >> T[i];
	}

	//S和T的列向量数组
	std::vector<std::string> Sclow(w);
	std::vector<std::string> Tclow(w);
	for (int j = 0; j < w; j++)
	{
		for (int i = 0; i < h; i++)
		{
			Sclow[j].push_back(S[i][j]);
			Tclow[j].push_back(T[i][j]);
		}
	}

	//排序后比较列向量数组是否相等
	std::sort(Sclow.begin(), Sclow.end());
	std::sort(Tclow.begin(), Tclow.end());
	if (Sclow == Tclow)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	return 0;
}