#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int numbers[100];
	bool same = true;

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];

		if (numbers[i] != numbers[0])
		{
			same = false;
		}
	}

	if (same)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}


	return 0;
}