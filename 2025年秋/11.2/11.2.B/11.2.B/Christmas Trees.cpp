//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	long long a, m, l, r;
//	cin >> a >> m >> l >> r;
//	/*long long number;
//
//	if (l < a && a < r)
//	{
//		number = (r - l) / m + 1;
//	}
//
//	else
//	{
//		if (l == a + m * ((l - a) / m) || r == a + m * ((r - a) / m))
//		{
//			number = (r - l) / m + 1;
//		}
//
//		else
//		{
//			number = (r - l) / m;
//		}
//	}
//
//	cout << number;*/
//
//
//	long long number;
//
//	double left = ceil(static_cast<double>(l - a) / m);
//	double right = floor(static_cast<double>(r - a) / m);
//
//	/*if (a + ((l - a) / m) * m == l)
//	{
//		left = (l - a) / m;
//	}
//	else if (a + ((r - a) / m) * m == r)
//	{
//		right = (r - a) / m;
//	}*/
//
//	number = static_cast<long long>(right - left + 1);
//
//	cout << number;
//
//	return 0;
//}


#include<iostream>
using namespace std;

int main()
{
	long long A, M, L, R;
	cin >> A >> M >> L >> R;
	long long X = A + (L - A) / M * M;

	if (X >= L && X <= R)
	{
		cout << (R - X) / M + 1;
	}
	else
	{
		cout << (R - X) / M;
	}

	return 0;
}
