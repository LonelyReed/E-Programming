#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	string s, t;

	cin >> n >> m;
	cin >> s >> t;

	//int first_pos = t.find_first_of(s);
	//int last_pos = t.find_last_of(s);

	//if (first_pos == 0 && last_pos == n )
	//{
	//	cout << 0;
	//}
	//else if (first_pos == 0 && last_pos != n )
	//{
	//	cout << 1;
	//}
	//else if (first_pos != 0 && last_pos == n )
	//{
	//	cout << 2;
	//}
	//else if (first_pos != 0 && last_pos != n )
	//{
	//	cout << 3;
	//}

	string prefix = t.substr(0, n);
	//string suffix = t.substr(min(n,m-n),max(n,m-n));
	string suffix = t.substr(m-n,n);

	//cout << prefix<<endl;
	//cout << suffix << endl;

	if (s == prefix && s == suffix)
	{
		cout << 0;
	}
	else if (s == prefix && s != suffix)
	{
		cout << 1;
	}
	else if (s != prefix && s == suffix)
	{
		cout << 2;
	}
	else if (s != prefix && s != suffix)
	{
		cout << 3;
	}


	return 0;
}