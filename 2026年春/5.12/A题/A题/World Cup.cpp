#include <iostream>

int main()
{
	int year;
	std::cin >> year;

	while (year % 4 != 2)
	{
		year++;
	}

	std::cout << year;

	return 0;
}