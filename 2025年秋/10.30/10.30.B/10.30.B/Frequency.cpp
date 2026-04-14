#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int result=0;
	cin >> s;

	int words[26] = {0};

	for (char word : s)
	{
		words[word - 97]++;
	}

	for (int i = 1; i < 26; i++)
	{
		if (words[i] > words[result])
		{
			result = i;
		}

		else if (words[i] == words[result])
		{
			result = min(i, result);
		}
	}

	cout << (char)(result + 97);
	

	return 0;
}