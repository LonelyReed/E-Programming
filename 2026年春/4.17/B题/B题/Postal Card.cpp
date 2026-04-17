#include <iostream>
#include <string>
const int N = 1010;

std::string S[N], T[N];

//比较两个字符串后三位是否相等
bool CompareStringEqual(std::string s, std::string t)
{
	//s长6个字符，t长3个字符
	std::string sub = s.substr(3, 3);
	if (sub == t)
	{
		return true;
	}
	
	return false;
}

int main()
{
	int n, m, total = 0;
	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		std::cin >> S[i];
	}
	
	for (int i = 0; i < m; i++)
	{
		std::cin >> T[i];

	}

	for (int i = 0; i < n; i++)
	{
		//遍历第一组字符串，去第二组中寻找是否存在一个使得s后三位与t相等
		for (int j = 0; j < m; j++)
		{
			if (CompareStringEqual(S[i], T[j]))
			{
				total++;
				break;
			}
		}
	}

	std::cout << total;

	return 0;
}