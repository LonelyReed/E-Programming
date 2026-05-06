#include <iostream>
#include <string>
const int N = 110;

//用户名按字典序输出

//两字符串的比较,判断s>t是否为真
bool CompareLargeString(std::string s,std::string t)
{
	//取两字符串长度较小的一个
	int length = std::min(s.size(), t.size());

	//每个字符进行比较
	for (int i = 0; i < length; i++)
	{
		if (s[i] > t[i])
		{
			return true;
		}
		else if (s[i] < t[i])
		{
			return false;
		}
	}

	//前length个字符都相等
	if (s.size() > length)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//字符串数组内元素的排序
void SortString(std::string(&array)[N], int length)
{
	//冒泡排序,从小到大
	for (int i = 0; i < length - 1; i++)
	{
		//对排序进行优化，如果有一轮没有交换则提前退出
		bool exchange = false;
		for (int j = 0; j < length - 1 - i; j++)
		{
			std::string temp;

			if (CompareLargeString(array[j],array[j + 1]))
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j + 1] = temp;

				exchange = true;
			}
		}

		if (!exchange)
		{
			break;
		}
	}
}


int main()
{
	int n, k;
	std::cin >> n >> k;

	std::string Originalarray[N];
	std::string finalarray[N];
	for (int i = 0; i < n; i++)
	{
		std::cin >> Originalarray[i];
		if (i <= k)
		{
			finalarray[i] = Originalarray[i];
		}
	}

	//前k个字符串排序
	SortString(finalarray, k);

	for (int i = 0; i < k; i++)
	{
		std::cout << finalarray[i] << std::endl;
	}

	return 0;
}