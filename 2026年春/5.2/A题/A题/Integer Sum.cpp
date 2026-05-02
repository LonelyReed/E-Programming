#include <iostream>
const int N = 110;
int numbers[N];

int main()
{
	int n, sum = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> numbers[i];
		sum += numbers[i];
	}

	std::cout << sum;


	return 0;
}