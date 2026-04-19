#include <iostream>
#include <string>
typedef long long ll;

//本题本质上为进制转化，字符串26进制转为数字10进制

int main()
{
	std::string s;
	std::cin >> s;

	ll answer = 0;
	size_t length = s.size();			//size_t为函数size的返回类型，定义类型为size_t确保安全

	for (size_t i = 0; i < length; i++)
	{

		answer = answer * 26 + (s[i] - 'A' + 1);
	}

	std::cout << answer;
}