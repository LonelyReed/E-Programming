#include <iostream>
#include <string>
const int N = 12;

int main()
{
	int h, w;
	std::string S[N];
	std::cin >> h >> w;

	for (int i = 0; i < h; i++)
	{
		std::cin >> S[i];
	}

	int total = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (S[i][j] == '#')
			{
				total++;
			}
		}
	}

	std::cout << total;

	return 0;
}