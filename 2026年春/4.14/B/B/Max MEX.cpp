#include <iostream>
#include <algorithm>

const int Len = 3e5 + 10;

int A[Len];

//原题等价于排序去重后，按升序，找到没有出现的数字，并与k比较取较小的一个
//去重比较麻烦，可以相邻元素做差看结构是否大于1

//法一：排序
//int findmex(int array[Len], int n,int k)
//{
//	//排序
//	std::sort(array+1, array+n);
//
//	//遍历做差
//	int miss = 0;
//
//	for (int i = 1; i <= n - 1; i++)
//	{
//		//缺失的数字在开头
//		if (array[1] != 0)
//		{
//			miss = 0;
//			break;
//		}
//
//		//缺失的数字在中间
//		if (array[i + 1] - array[i]>1)
//		{
//			miss = array[i] + 1;
//			break;
//		}
//
//		//整个数组没有缺失的数字
//		miss = array[n] + 1;
//
//	}
//
//	return std::min(k, miss);
//}

////法二：标记数组中的值是否出现,不用排序
//int findmex_2(int array[Len], int n, int k)
//{
//	//只需要关注小于k的值
//	//将小于k的值作为下标映射到一个布尔数组
//	bool exit[Len + 2] = {false};
//
//	
//}


//int main()
//{
//	int n, k;
//	std::cin >> n >> k;
//
//	//输入
//	for (int i = 1; i <= n; i++)
//	{
//		std::cin >> A[i];
//	}
//
//	int result = findmex(A, n, k);
//	std::cout << result;
//
//	return 0;
//}

int main()
{
	int n, k;
	std::cin >> n >> k;

	//标记数组中的值是否出现, 不用排序
	//只需要关注小于k的值
	//将小于k的值作为下标映射到一个布尔数组
	bool exit[Len + 2] = { false };

	//边输入边判断
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;

		if (x <= k)
		{
			exit[x] = true;
		}
	}

	//找到第一个不存在的数
	int miss_index = 0;
	while (exit[miss_index])
	{
		miss_index++;
	}

	int answer = std::min(k, miss_index);
	std::cout << answer;

	return 0;
}