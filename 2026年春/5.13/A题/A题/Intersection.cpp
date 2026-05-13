#include <iostream>

int main()
{
	int L1, R1;
	int L2, R2;
	std::cin >> L1 >> R1 >> L2 >> R2;

	int length = 0;
	
	//相交区间
	//左边必定大于等于L1和L2，左边取max
	//右边必定小于等于R1和R2，右边取min
	if (std::min(R1, R2) - std::max(L1, L2)>=0)
	{
		length = std::min(R1, R2) - std::max(L1, L2);
	}

	std::cout << length;

	return 0;
}