#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	/*int sa=0, sb=0, sc=0;*/

	//sa = s.rfind('A') - s.find('A') + 1;
	//sb = s.rfind('B') - s.find('B') + 1;
	//sc = s.rfind('C') - s.find('C') + 1;

	//string s1(sa, 'A');
	//string s2(sb, 'B');
	//string s3(sc, 'C');

	//if (s == s1 + s2 + s3)
	//{
	//	cout << "Yes";
	//}
	//else
	//{
	//	cout << "No";
	//}

	int length = s.length();
	int i = 0;

	while (s[i] == 'A')
	{
		i++;
	}

	while (s[i] == 'B')
	{
		i++;
	}

	while (s[i] == 'C')
	{
		i++;
	}

	if (i == length)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}