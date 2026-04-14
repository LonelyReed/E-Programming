#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n>>s;

	int index = s.find("ABC");

	if (index == string::npos)
	{
		cout << -1;
	}
	else
	{
		cout << index+1;
	}




	return 0;
}