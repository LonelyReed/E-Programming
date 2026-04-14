#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
	int  n, t;
	cin >> n >> t;

	vector<int> players;
	vector<long long> score;
	vector<long long> numbers;

	for (int i = 0; i < t; i++)
	{
		cin >> players[i]>>score[i];

	}

	for (int i=0;i<t;i++)
	{
		numbers[players[i]] += score[i];
		cout << numbers[players[i]];
	}






	return 0;
}