#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//10进制(dec)转为16进制(hex)
//std::string dectohex(int n)
//{
//	const std::string hexdigits = "0123456789ABCDEF";
//	std::string hexresult = "";
//	if (n == 0)
//	{
//		return "0";
//	}
//	while (n >= 1)
//	{
//		hexresult = hexresult + hexdigits[n % 16];
//		n = n / 16;
//	}
//
//	//倒序排列——使用algorithm中的reverse函数
//	std::reverse(hexresult.begin(), hexresult.end());
//	
//	return hexresult;
//}

//修改后的10进制转16进制的函数——两位有效位数
std::string dectohex(int n)
{
	const std::string hexdigits = "0123456789ABCDEF";
	std::string hexresult = "";
	if (n == 0)
	{
		return "00";
	}
	int length = 0;
	while (n >= 1)
	{
		hexresult = hexresult + hexdigits[n % 16];
		n = n / 16;
		length++;
	}

	//倒序排列——使用algorithm中的reverse函数
	std::reverse(hexresult.begin(), hexresult.end());
	//检查是否位2位有效位数
	if (length == 1)
	{
		hexresult = "0" + hexresult;
	}
	return hexresult;
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << dectohex(n);
	return 0;
}
