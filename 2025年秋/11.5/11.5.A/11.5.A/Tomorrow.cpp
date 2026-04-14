#include <iostream>
using namespace std;

int main()
{
	int M, D, y,m,d;
	cin >> M >> D;
	cin >> y >> m >> d;

	d += 1;

	if (d > D)
	{
		d = 1;
		m += 1;
	}

	if (m > M)
	{
		m = 1;
		y += 1;
	}

	cout << y << " " << m << " " << d;



	return 0;
}