#include <iostream>
#include <string>

int main()
{
	int k;
	std::cin >> k;

	std::string S = "";
	for (int i = 0; i < k; i++)
	{
		char word = 'A' + i;
		S = S + word;
	}

	std::cout << S;

	return 0;
}