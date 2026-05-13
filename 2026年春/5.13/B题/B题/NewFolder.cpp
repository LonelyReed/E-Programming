#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

int main()
{
	int n;
	std::cin >> n;

	//vector存储所有字符串
	std::vector<std::string> strings(n);
	//map存储在这之前字符串出现的次数
	std::unordered_map<std::string, int> frequency;

	for (int i = 0; i < n; i++)
	{
		std::cin >> strings[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (frequency[strings[i]] == 0)
		{
			std::cout << strings[i] << std::endl;
		}
		else
		{
			int num = frequency[strings[i]];
			std::cout << strings[i] << '(' << num << ')' << std::endl;
		}

		frequency[strings[i]]++;
	}

	return 0;
}