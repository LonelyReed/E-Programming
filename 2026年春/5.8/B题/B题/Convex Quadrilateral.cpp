#include <iostream>

//点结构体
struct Point
{
	int x;
	int y;
};


int main()
{
	Point points[4];
	
	for (int i = 0; i < 4; i++)
	{
		std::cin >> points[i].x >> points[i].y;
	}

	//存储符号
	int sign[4];

	//求以四个点为起点的向量叉乘
	for (int i = 0; i < 4; i++)
	{
		Point vector1;
		Point vector2;

		vector1.x = points[(i - 1 + 4) % 4].x - points[i].x;
		vector1.y = points[(i - 1 + 4) % 4].y - points[i].y;

		vector2.x = points[(i + 1 + 4) % 4].x - points[i].x;
		vector2.y = points[(i + 1 + 4) % 4].y - points[i].y;

		int result = vector1.x * vector2.y - vector1.y * vector2.x;

		//结果为正，映射为1
		if (result > 0)
		{
			sign[i] = 1;
		}
		//结果为0，映射为0
		else if (result == 0)
		{
			sign[i] = 0;
		}
		//结果为负，映射为-1
		else
		{
			sign[i] = -1;
		}

	}

	if (sign[0] == sign[1] && sign[1] == sign[2] && sign[2] == sign[3] && sign[0]!=0)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	return 0;
}

//判断四边形是不是凸四边形
//核心判断：分别以四个顶点为起点的向量叉乘符号是否一致且不为0