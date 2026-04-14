#include <iostream>
using namespace std;

int main()
{
	int n, s, k;
	cin >> n >> s >> k;

	int p, q;
	int total=0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> p>> q;
		total += p* q;
	}

	if (total >= s)
	{
		cout << total;
	}
	else
	{
		total += k;
		cout << total;
	}




	return 0;
}