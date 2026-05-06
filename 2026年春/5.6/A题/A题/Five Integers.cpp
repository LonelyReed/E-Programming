#include <iostream>
#include <unordered_set>

int main()
{
	std::unordered_set<int> numbers;
	for (int i = 0; i < 5; i++)
	{
		int x;
		std::cin >> x;
		numbers.insert(x);
	}

	std::cout << numbers.size();

	return 0;
}