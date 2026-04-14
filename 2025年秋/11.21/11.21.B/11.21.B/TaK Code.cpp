#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<char>> tak(n, vector<char>(m));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tak[i][j];
		}
	}

	vector<vector<char>> black = {
		{0,0},{0,1},{0,2},
		{1,0},{1,1},{1,2},
		{2,0},{2,1},{2,2}
	};
	
	vector<vector<char>> white = {
		{0,3},{1,3},{2,3},{3,3},
		{3,0},{3,1},{3,2}
	};

	for (int i = 0; i < n - 8; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			for (int[x, y] : black)
			{
				if(tak[i+x][j+y]!='#')
			}


		}
	}








	return 0;
}