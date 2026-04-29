#include <iostream>
#include <vector>
const int N = 2e5 + 10;
typedef long long ll;

int main()
{
	int n,q;
	std::cin >> n;

	std::vector<ll> a(n);

	//ÊäÈë
	for (int i = 1; i <= n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> q;
	std::vector<ll> out(q);
	//±ßÊäÈë±ß²Ù×÷
	for (int t = 0; t < q; t++)
	{
		int op;
		std::cin >> op;

		if (op == 1)
		{
			ll k;
			std::cin >> k;


		}
	}


	return 0;
}