#include <iostream>
typedef long long ll;

//计算A^B，直接使用power函数，其返回类型为浮点型，当数据较大时，会偏差较大
ll Power(int a,int b)
{
	ll answer = 1;
	for (int i = 0; i < b; i++)
	{
		answer = answer * a;
	}
	return answer;
}

int main()
{
	int A, B;
	std::cin >> A >> B;

	ll answer = Power(A, B);

	std::cout << answer;

	return 0;
}