#include <iostream>
#include <string>
#include <unordered_map>

//字符串和数字一一对应
int main()
{
	std::string key;
	std::cin >> key;

	std::unordered_map<std::string, int> daytate = {
		{"Monday",1},{"Tuesday",2},{"Wednesday",3},{"Thursday",4},{"Friday",5},{"Saturday",6}
	};
	
	if (daytate.find(key) != daytate.end())
	{
		std::string target = "Saturday";
		std::cout << daytate[target] - daytate[key];
	}

	return 0;
}