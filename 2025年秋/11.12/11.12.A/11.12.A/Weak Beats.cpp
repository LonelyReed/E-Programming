#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	bool condition = true;

	for (int i = 2; i <= 16; i=i + 2)
	{
		if (s[i-1] == '1')
		{
			condition = false;
		}
	}

	if (condition)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}