#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> scores(m);
	for (int i = 0; i < m; i++)
	{
		cin >> scores[i];
	}

	vector<string> s(n);
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	vector<int> total(n);
	for (int i = 0; i < n; i++)
	{
		int personal_score = 0;
		for (int j = 0; j < m; j++)
		{
			if (s[i][j] == 'o')
			{
				personal_score += scores[j];
			}
		}
		total[i] = personal_score + (i+1);
	}

	int maxnum = 0;
	for (int i = 0; i < n; i++)
	{
		if (total[i] > maxnum)
		{
			maxnum = total[i];
		}
	}
	

	//for (int i = 0; i < n; i++)
	//{
	//	vector<int> copy = scores;
	//	for (int j = 0; j < m; j++)
	//	{
	//		if (s[i][j] == 'o')
	//		{
	//			copy[j] = 0;
	//		}
	//		sort(copy.rbegin(), copy.rend());

	//		if (total[i] == maxnum)
	//		{
	//			cout << 0;
	//		}
	//		else
	//		{
	//			int times = 0;
	//			for (int k = 0; total[i] <= maxnum; k++)
	//			{
	//				total[i] += copy[k];
	//				times++;
	//			}
	//			cout << times;
	//		}
	//	}
	//}

	for (int i = 0; i < n; i++)
	{
		if (total[i] >= maxnum)
		{
			cout << 0 << endl;
		}

		else
		{
			vector<int> unsolved;
			for (int j = 0; j < m; j++)
			{
				if (s[i][j] == 'x')
				{
					unsolved.push_back(scores[j]);
				}
			}

			sort(unsolved.rbegin(), unsolved.rend());

			int times = 0;
			for (int k = 0; total[i] < maxnum; k++)
			{
				total[i] += unsolved[k];
				times++;
			}
			cout << times << endl;
		}
	}

	return 0;
}


