#include <iostream>

int main()
{
	int x, y, n;
	std::cin >> x >> y >> n;

	int xnum, ynum;		//x买的个数，y买的个数	
	if (3 * x > y)		//x的单价高于y的单价
	{
		//优先买y
		ynum = n / 3;
		xnum = n - ynum * 3;
	}
	else
	{
		//优先买x
		xnum = n;
		ynum = 0;
	}

	int money = x * xnum + y * ynum;

	std::cout << money;

	return 0;
}