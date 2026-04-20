#include <iostream>
#include <stack>
#include <string>

//正序输入，倒序输出——栈
int main()
{
	//栈的初始化
	std::stack<std::string> S;

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string element;
		std::cin >> element;
		S.push(element);
	}

	while(!S.empty())
	{
		//取栈顶元素
		std::string element = S.top();
		std::cout << element << std::endl;
		//出栈
		S.pop();
	}

	return 0;
}