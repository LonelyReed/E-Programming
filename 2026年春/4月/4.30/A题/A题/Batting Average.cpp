#include <iostream>
#include <iomanip>

//整数除法保留特定位数
//double fixedDivision(int x, int y, int precision)
//{
//	//小数点后保留n位，那么被除数先扩大10^(n+1)倍
//	int n = precision;
//	for (int i = 0; i <= n; i++)
//	{
//		x = x * 10;
//	}
//
//	int z = x / y;
//	int lastnum = z % 10;
//	z = z / 10;
//	double result = z;
//	if (lastnum >= 5)
//	{
//		result += 1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		result /= 10.0;
//	}
//
//	return result;
//}


int main()
{
	int A, B;
	std::cin >> A >> B;

	double dA = A;
	double dB = B;

	double result = dB / dA;

	std::cout << std::fixed << std::setprecision(3) << result << std::endl;

	return 0;
}