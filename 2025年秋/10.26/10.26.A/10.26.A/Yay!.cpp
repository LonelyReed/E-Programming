#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int length = s.length();
	int position = 0;

	if (s[0] == s[1])
	{
		for (int i = 0; i < length; i++)
		{
			if (s[i] != s[0])
			{
				position = i+1;
			}
		}
	}

	if (s[0] != s[1])
	{
		if (s[0] == s[2])
		{
			position = 2;
		}

		else if (s[0] != s[2])
		{
			position = 1;
		}
	}


	cout << position;


	return 0;
}