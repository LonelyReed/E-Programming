#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i <= (b - a) / c; i++)
	{
		cout << a + c * i << " ";
	}


	return 0;
}