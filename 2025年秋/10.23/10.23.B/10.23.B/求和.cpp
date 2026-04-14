#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
	/*long long n, k;
	long long number;
	vector<long long> numbers;
	
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> number;
		numbers.push_back(number);
	}

	long long total = 0;
	for (long long i = 1; i <= k; i++)
	{
		long long times = 0;
		for (long long j = 0; j < n; j++)
		{
			if (i  != numbers[j])
			{
				times +=1;
			}
		}

		if (times == n)
		{
			total += i;
		}
	}

	cout << total;*/


	long long n, k;
	long long number;

	cin >> n >> k;

	unordered_set<long long> numbers;

	for (long long i = 0; i < n; i++)
	{
		cin >> number;

		if (number <= k)
		{
			numbers.insert(number);
		}
	}

	long long sum = k*(k+1)/2;
	//for (long long i = 1; i <= k; i++)
	//{
	//	if (numbers.find(i) == numbers.end())
	//	{
	//		sum += i;
	//	}
	//	for (long long element : numbers)
	//	{
	//		sum -= element;
	//	}		
	//}

	for (long long element : numbers)
	{
		sum -= element;
	}

	cout << sum;

	return 0;
}