#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	for (char word : s)
	{
		if (word != 'a' && word != 'e' && word != 'i' && word != 'o' && word != 'u')
		{
			cout << word;
		}
	}


	return 0;
}