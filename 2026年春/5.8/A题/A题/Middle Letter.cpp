#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;

	int length = s.length();

	std::cout << s[(length - 1) / 2];

	return 0;
}