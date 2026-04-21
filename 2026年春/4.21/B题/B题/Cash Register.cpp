#include <iostream>
#include <string>

//由题意，除了00会增加2位，其他按键只会增加1位
//由于S数值较大，采用字符串来储存

int main()
{
	std::string S;
	std::cin >> S;

	int times = 0;

	//特殊情况：S=0时，次数为0
	if(S!="0")
	{
		int length = S.length();
		times = length;
		//统计连续0的中0的个数,以便后续减去00所占的位数
		int zerototal = 0;
		for (int i = 0; i < length; i++)
		{
			//注意处理0在末尾的情况
			if (S[i] == '0')
			{
				zerototal++;
			}
			//如果0在末尾，则不会执行该语句
			else
			{
				times = times - zerototal / 2;
				zerototal = 0;
			}
		}
		//如果0在末尾，那么退出循环时，zerototal不为0
		if (zerototal)
		{
			times = times - zerototal / 2;
			zerototal = 0;
		}
	}

	std::cout << times;

	return 0;
}