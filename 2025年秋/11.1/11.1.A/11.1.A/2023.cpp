#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int length = s.length();

	s[length - 1] = '4';

	cout << s;



	return 0;
}