#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;

	long long times = 0;

	if (a % b == 0)
	{
		times = a / b ;
	}
	else
	{
		times = a / b + 1;
	}

	cout << times;

	return 0;
}