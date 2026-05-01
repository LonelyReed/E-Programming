#include <iostream>
typedef long long ll;

ll factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);

}

int main()
{
	int n;
	std::cin >> n;

	ll result = factorial(n);

	std::cout << result;
	return 0;
}