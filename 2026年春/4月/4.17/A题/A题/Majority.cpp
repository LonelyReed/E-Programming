#include <iostream>
#include <string>
const int N = 100;
const std::string agree = "For";
const std::string disagree = "Against";

int main()
{
	int n,total = 0;
	std::cin >> n;

	std::string S[N];

	//边输入边判断
	for (int i = 0; i < n; i++)
	{
		std::cin >> S[i];
		if (S[i] == agree)
		{
			total++;
		}
	}

	//判断人数是否超过一半
	//换句话，同意的人是否是比不同意的人多
	if (total > n - total)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}