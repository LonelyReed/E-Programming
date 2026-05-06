#include <iostream>
typedef long long ll;
const int N = 10010;

int main()
{
	int n;
	std::cin >> n;

	ll A, B;
	ll result[N];
	for (int i = 0; i < n; i++)
	{
		std::cin >> A >> B;
		result[i] = A + B;

	}

	for (int i = 0; i < n; i++)
	{
		std::cout << result[i] << std::endl;
	}

	return 0;
}