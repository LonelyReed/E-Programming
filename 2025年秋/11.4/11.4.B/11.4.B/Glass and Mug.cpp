#include <iostream>
using namespace std;

int main()
{
	int k,G, M;
	int g=0, m=0;
	cin >> k >> G >> M;

	for (int i = 0; i < k; i++)
	{
		if (g == G) {		
			g = 0;
		}
		else if (m == 0) {
			m = M;
		}
		else {
			int pour = min(m, G - g);  
			g += pour;
			m -= pour;
		}
	}
		
	//for (int i = 0; i < k; i++)
	//{
	//	if (m == 0)
	//	{
	//		m = M;
	//	}
	//	else if (m != 0 && g == 0)
	//	{
	//		if (m > g)
	//		{
	//			g = G;
	//			m -= g;
	//		}
	//		else
	//		{
	//			g = m;
	//			m = 0;
	//		}
	//	}
	//	else if (g = G)
	//	{
	//		g = 0;
	//	}
	//}

	/*int i = 0;
	while (i <k)
	{
		if (m == 0)
		{
			m = M;
			i++;
		}
		if (m != 0 && g!= G)
		{
			if (m > g)
			{
				g = G;
				m -= g;
				i++;
			}
			else
			{
			g = m;
			m = 0;
			i++;
			}
		}
		if (g==G)
		{
			g = 0;
			i++;
		}
	}*/


	//int i = 0;
	//while (i < k)
	//{
	//	if (m == 0)
	//	{
	//		m = M;
	//		i++;
	//	}
	//	else if (m != 0 && g != G)
	//	{
	//		if (m + g >= G)
	//		{
	//			m -= (G - g);
	//			g = G;
	//			i++;
	//		}
	//		else
	//		{
	//			g += m;
	//			m = 0;
	//			i++;
	//		}
	//	}
	//	else if (g == G)
	//	{
	//		g = 0;
	//		i++;
	//	}
	//}

	//int i = 0;
	//while (i < k)
	//{
	//	if (m == 0)
	//	{
	//		m = M;
	//		i++;
	//	}
	//	else if (m != 0 && g != G)
	//	{
	//		g += m;
	//		m = 0;
	//		i++;
	//		if (g > G)
	//		{
	//			g = G;
	//			m = g - G;
	//		}
	//	}
	//	else if (g == G)
	//	{
	//		g = 0;
	//		i++;
	//	}
	//}

	cout << g << " " << m;

	return 0;
}