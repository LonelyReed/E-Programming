#include <iostream>
typedef long long ll;

ll result[100010];

//求两个数的最大公因数
int gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main()
{
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		ll n, d, k;
		std::cin >> n >> d >> k;

		ll g = gcd(n, d);
		ll l = n / g;
		result[i] = ((k - 1) * d + (k - 1) / l) % n;
	}

	for (int i = 0; i < t; i++)
	{
		std::cout << result[i] <<std::endl;
	}

	return 0;
}