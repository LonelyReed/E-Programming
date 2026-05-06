#include <iostream>
#include <string>

int main()
{
	std::string S;
	std::cin >> S;

	int length = S.length();
	//是否为题目满足的字符串
	bool istarget = true;

	
	//特判第二位不能为0
	if (length == 8 && S[1] != '0')
	{
		if ((S[0] >= 'A' && S[0] <= 'Z') && (S[7] >= 'A' && S[7] <= 'Z'))
		{
			for (int i = 1; i < 7; i++)
			{
				if (S[i] < '0' || S[i]>'9')
				{
					istarget = false;
					break;
				}
			}
		}
		else
		{
			istarget = false;
		}
	}
	else
	{
		istarget = false;
	}


	if (istarget)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	return 0;
}