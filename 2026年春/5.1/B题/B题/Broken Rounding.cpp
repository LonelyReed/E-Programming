#include <iostream>
typedef long long ll;
const int N = 20;

int main()
{
	ll n;
	int k;
	std::cin >> n >> k;

	int digits[N] = { 0 };
	int length = 0;
	ll ncopy = n;
	//获取n的各个位数和长度
	for (int i = 0; ncopy >= 1; i++)
	{
		digits[i] = ncopy % 10;
		ncopy /= 10;
		length++;
	}

	//四舍五入——进位
	for (int i = 0; i < k; i++)
	{
		if (digits[i] >= 5)
		{
			digits[i] = 0;
			digits[i + 1] += 1;
		}
		else
		{
			digits[i] = 0;
		}
	}

	//返回进位以后的数
	ll x = 0;
	for (int i = 0; i <= length; i++)
	{
		x *= 10;
		x += digits[length-i];
	}
	std::cout << x;

	return 0;
}