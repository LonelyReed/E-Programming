#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	/*vector<int> mat;
	int number;

	for (int i = 0; i < n*n; i++)
	{
		cin >> number;
		mat.push_back(number);
	}

	for (int i = 0; i <n*n; i++)
	{
		if (mat[i] == 1)
		{
			cout << i - (i/5)*5<<' ';
		}
	}*/

	vector<vector<int>> mat(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			if (mat[i][j] == 1)
			{
				cout << j + 1<<' ';
			}
		}
		cout << endl;
	}

	return 0;
}