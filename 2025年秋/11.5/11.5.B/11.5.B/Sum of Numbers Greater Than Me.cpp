#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> a(n);
	int s;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	/*for (int i = 0; i < n; i++)
	{
		s = 0;
		for (int j = 0; j<n;j++)
		{
			if (a[j] > a[i])
			{
				s += a[j];
			}
		}
		
		cout << s << " ";
	}*/




	return 0;
}