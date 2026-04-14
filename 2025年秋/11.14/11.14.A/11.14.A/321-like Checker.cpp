#include <iostream>
using namespace std;

//bool pos_num(int n)
//{
//	int x = n % 10;
//	int y = (n / 10) % 10;
//
//	n = n / 10;
//
//	if (y > x)
//	{
//		return pos_num(n);
//	}
//	else
//	{
//		return false;
//	}
//}


int main()
{
	int n;
	cin >> n;
	
	bool condition = true;
	for (int i = 1; n / 10 >= 1; i++)
	{
		int x = n % 10;
		int y = (n / 10) % 10;

		if (y <= x)
		{
			condition = false;
			break;
		}

		n = n / 10;
	}

	if (condition)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}