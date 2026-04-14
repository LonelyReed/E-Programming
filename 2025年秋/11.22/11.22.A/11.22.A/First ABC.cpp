#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> n >> s;

	int total = 0;
	unordered_set<char> abc;

	for (int i = 0; i < n; i++)
	{
		abc.insert(s[i]);

		total++;

		if (abc.size() == 3)
		{
			break;
		}
		
	}

	cout << total;

	return 0;
}