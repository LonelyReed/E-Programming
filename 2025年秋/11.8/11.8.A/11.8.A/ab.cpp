#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	
	if (s.find("ab")!=string::npos || s.find("ba")!=string::npos)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}



	return 0;
}