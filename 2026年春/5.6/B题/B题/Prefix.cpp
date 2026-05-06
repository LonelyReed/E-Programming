#include <iostream>
#include <string>

//Ç°×ºÅÐ¶Ïº¯Êý
bool isPrefix(std::string s, std::string t)
{
	if (s.size() > t.size())
	{
		return false;
	}
	
	return t.substr(0, s.size()) == s;
}

int main()
{
	std::string s;
	std::string t;

	std::cin >> s >> t;

	if (isPrefix(s, t))
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	return 0;
}