#include <iostream>
#include <string>

int main()
{
	std::string s = "";
	std::cin >> s;

	std::string result = "";
	for (char word : s)
	{
		if (word == '1')
		{
			result += '0';
		}
		else
		{
			result += '1';
		}
	}

	std::cout << result;

	return 0;
}