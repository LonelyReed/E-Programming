#include <iostream>

int main()
{
	int h, m;
	std::cin >> h >> m;

	while(true)
	{
		int hones = h % 10;
		int htens = h / 10;

		int mones = m % 10;
		int mtens = m / 10;

		int newh = htens * 10 + mtens;
		int newm = hones * 10 + mones;

		if (newh < 24 && newm < 60)
		{
			std::cout << h << " " << m;
			break;
		}

		m = m + 1;

		//½øÎ»
		if (m == 60)
		{
			m = 0;
			h +=1;
			if (h == 24)
			{
				h = 0;
			}
		}
	}

	return 0;
}