#include <iostream>
typedef unsigned long long ll;
const ll modulus = 998244353;

int main()
{
	ll a, b, c;
	ll d, e, f;
	std::cin >> a >> b >> c >> d >> e >> f;

	//输入取模
	a %= modulus;
	b %= modulus;
	c %= modulus;
	d %= modulus;
	e %= modulus;
	f %= modulus;
	
	ll x1 = (a * b) % modulus;
	ll y1 = (x1 * c) % modulus;

	ll x2 = (d * e) % modulus;
	ll y2 = (x2 * f) % modulus;

	ll result = (y1 - y2 + modulus) % modulus;		//y1-y2可能为负数

	std::cout << result;
	
	return 0;
}