#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s;
	cin >> s;

	//bool condition;

	//if (isupper(s[0]))
	//{
	//	s.erase(s[0]);

	//	for (char word : s)
	//	{
	//		if (isupper(word))
	//		{
	//			condition = 1;
	//			break;
	//		}
	//	}

	//	if (condition)
	//	{
	//		cout << "No";
	//	}
	//}

	//else
	//{
	//	cout << "No";
	//}
	
	bool judge=1;

	if (isupper(s[0]))
	{
		int length = s.length();
		for (int i = 1; i < length; i++)
		{
			if (isupper(s[i]))
			{
				judge = 0;
				break;
			}
		}
	}
	else
	{
		judge = 0;
	}

	if (judge)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}