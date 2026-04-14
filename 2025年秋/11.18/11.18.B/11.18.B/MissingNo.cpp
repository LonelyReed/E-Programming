#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;;

	vector<int> numbers(n);
	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < n - 1; i++)
	{
		if (numbers[i + 1] - numbers[i] != 1)
		{
			cout << numbers[i] + 1;
		}
	}


	return 0;
}