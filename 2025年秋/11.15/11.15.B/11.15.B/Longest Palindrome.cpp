#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string s,copy;
	//cin >> s;
	//copy = s;

	//int length = s.length();
	//int max_len = length;
	//reverse(copy.begin(), copy.end());

	//for (int k = 0; k <= length ; k++)
	//{
	//	bool running = false;
	//	for (int i = 0; i < length; i++)
	//	{
	//		string part = s.substr(i, max_len);

	//		if (copy.find(part) != string::npos)
	//		{
	//			running = true;
	//		}
	//	}

	//	if (running)
	//	{
	//		break;
	//	}

	//	max_len = max_len - 1;
	//}

	//cout << max_len;

	string s;
	cin >> s;

	int length = s.length();
	int left = 0, right = 0;
	int max_len = 1;

	for (int i = 0; i < length; i++)
	{
		left = i;
		right = i;
		while (left >= 0 && right < length && s[left] == s[right])
		{
			max_len =max(max_len, right - left + 1);
			left--;
			right++;
		}

		left = i;
		right = i+1;
		while (left >= 0 && right < length && s[left] == s[right])
		{
			max_len =max(max_len, right - left + 1);
			left--;
			right++;
		}
	}


	cout << max_len;



	return 0;
}