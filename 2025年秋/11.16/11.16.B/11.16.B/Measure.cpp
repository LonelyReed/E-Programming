#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	//for (int i = 0; i <= n; i++)
	//{
	//	if (i == 0)
	//	{
	//		cout << 1;
	//	}
	//	else if (n%i==0 && n / i >= 1 && n / i <= 9)
	//	{
	//		cout << n / i;
	//	}
	//	else
	//	{
	//		cout << '- ';
	//	}
	//}

	vector<int> divisor;
	for (int i = 1; i <= 9; i++)
	{
		if (n % i == 0)
		{
			divisor.push_back(i);
		}
	}

	int length = divisor.size();
	for (int i = 0; i <= n; i++)
	{
		bool flag = false;
		for (int j = 0; j < length; j++)
		{
			if (i % (n / divisor[j]) == 0)
			{
				cout << divisor[j];
				flag = true;
				break;
			}
		}

		if (!flag)
		{
			cout << '-';
		}
	}

	return 0;
}