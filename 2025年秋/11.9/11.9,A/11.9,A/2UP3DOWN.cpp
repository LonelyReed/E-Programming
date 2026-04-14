#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	if ((y-x>0&&y - x <= 2) ||(x-y>0&&x - y <= 3))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}



	return 0;
}