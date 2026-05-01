#include <iostream>
const int N = 1010;
char grid[N][N];

//储存列向量中的#个数
int clownum[N];

int main()
{
	int H, W;
	std::cin >> H >> W;

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			std::cin >> grid[i][j];
		}
	}

	//遍历列
	for (int j = 0; j < W; j++)
	{
		int total = 0;
		for (int i = 0; i < H; i++)
		{
			if (grid[i][j] == '#')
			{
				total++;
			}
		}
		clownum[j] = total;
	}

	//输出
	for (int i = 0; i < W; i++)
	{
		std::cout << clownum[i] << " ";
	}

	return 0;
}