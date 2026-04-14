#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int length = s.length();

	for (int i = length - 1; i >= 0; i--)
	{
		if (s[i] == '.')
		{
			string end = s.substr(i+1);
			cout << end;
			break;
		}
	}



	return 0;
}