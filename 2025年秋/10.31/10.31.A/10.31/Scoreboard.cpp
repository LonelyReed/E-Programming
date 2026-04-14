#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int x = 0;
	int y = 0;

	int a, b;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		x += a;
		y += b;
	}

	if (x > y)
	{
		cout << "Takahashi";
	}
	else if(x == y)
	{
		cout << "Draw";
	}
	else
	{
		cout << "Aoki";
	}

	return 0;
}