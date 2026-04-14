#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	/*int origian = n;*/

	/*int ones = n % 10;
	n = n / 10;
	int tens = n % 10;
	n = n / 10;
	int hundreds = n % 10;*/

	/*if (hundreds * tens < 10 && hundreds * tens >= ones)
	{
		cout << hundreds * 100 + tens * 10 + hundreds * tens;
	}
	else
	{
		bool running = false;
		for (int i = hundreds ; i <= 9; i++)
		{
			for (int j = tens+1 ; j <= 9; j++)
			{
				if (i*j < 10)
				{
					cout << i * 100 + j * 10 + i*j;
					running = true;
					break;
				}
			}

			if (running)
			{
				break;
			}
		}
	}*/

	/*for (int i = hundreds; i < 10; i++)
	{
		for (int j = tens; j < 10; j++)
		{
			if (hundreds * tens < 10)
			{
				int number = hundreds * 100 + tens * 10 + hundreds * tens;
				if (number >= origian)
				{
					cout << number;
					return 0;
				}
			}
		}
	}*/

	int number = 0;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 0;j<10; j++)
		{
			if (i * j < 10)
			{
				number = i * 100 + j * 10 + i * j;

				if (number >= n)
				{
					cout << number;
					return 0;
				}
			}
		}
	}

	return 0;
}