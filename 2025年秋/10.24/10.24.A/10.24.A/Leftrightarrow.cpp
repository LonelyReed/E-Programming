#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int length = s.length();

	bool condition = true;
	
	if (s[0] == '<' && s[length - 1] == '>')
	{
		s.erase(0, 1);
		s.erase(length - 1.1);

		for (char word : s)
		{
			if (word != '=')
			{
				condition = false;
			}
		}
	}
	else
	{
		condition = false;
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