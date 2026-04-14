#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	bool equal = false;
	string words[] = { "ACE","BDF","CEG","DFA","EGB","FAC","GBD" };
	for (string word : words)
	{
		if (word == s)
		{
			equal = true;
		}
	}
	
	if (equal)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}



	return 0;
}