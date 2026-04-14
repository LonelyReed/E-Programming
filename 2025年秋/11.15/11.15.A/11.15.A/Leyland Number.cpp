#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int num1 = 1,num2=1;
	int result = 0;

	for (int i = 0; i < b; i++)
	{
		num1 *= a;
	}
	for (int i = 0; i < a; i++)
	{
		num2 *= b;
	}

	result = num1 + num2;
	cout << result;

	return 0;
}