#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int begin = s.find('|');
	int end = s.rfind('|');

	s.erase(begin, end - begin + 1);
	cout << s;

	return 0;
}