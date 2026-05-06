#include <iostream>
#include <string>
const int N = 12;
typedef long long ll;
ll numbers[N] = { 0 };
ll results[N] = { 0 };

int main()
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		std::cin >> numbers[i];
	}
	
	//类似于前缀和的求法
	for (int i = 1; i <= n; i++)
	{
		results[i] = numbers[i] - numbers[i - 1];
	}

	for (int i = 1; i <= n; i++)
	{
		std::cout << results[i] << " ";
	}

	return 0;
}