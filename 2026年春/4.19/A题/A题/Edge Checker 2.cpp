#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (2 * a == b || 2 * a + 1 == b)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	return 0;
}