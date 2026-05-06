#include <iostream>
typedef long long ll;
const int N = 2e5 + 10;
ll Amebas[N];

int main()
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> Amebas[i];
	}

	std::cout << 0 << std::endl;
	for (int i = 0; i < n; i++)
	{
		int generation = 0;
		while (Amebas[i] != 0)
		{
			generation++;
			Amebas[i] /= 2;
		}
		std::cout << generation << std::endl;
		std::cout << generation << std::endl;
	}

	return 0;
}