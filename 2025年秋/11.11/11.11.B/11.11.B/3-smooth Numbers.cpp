#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	//if (n % 2 == 0 || n % 3 == 0)
	//{
	//	cout << "Yes";
	//}
	//else
	//{
	//	cout << "No";
	//}

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	
	while (n % 3 == 0)
	{
		n = n / 3;
	}

	if (n == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}