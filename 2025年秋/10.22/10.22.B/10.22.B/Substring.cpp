#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	/*string s;
	cin >> s;

	int words[26] = {0};
	for (int i = 0; i < (int)s.length(); i++)
	{
		char word = s[i];
		int order = word - 97;
		words[order] += 1;
	}

	int total = 0;
	for (int i = 0; i < 26; i++)
	{
		if (words[i] > 0)
		{
			total += 1;
		}
	}

	cout << (int)s.length() * total - 1;*/

	string s;
	cin >> s;

	unordered_set<string> parts;

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = i; j < s.length(); j++)
		{
			string part = s.substr(i, j - i + 1);
				/*cout << part<<endl;*/
			parts.insert(part);
		}
	}

	cout << parts.size();


	return 0;
}