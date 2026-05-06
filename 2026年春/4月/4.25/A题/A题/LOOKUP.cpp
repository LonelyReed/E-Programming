#include <iostream>
#include <string>

int main()
{
	std::string S,T;
	std::cin >> S >> T;

	if (S.find(T) != std::string::npos)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}



	return 0;
}