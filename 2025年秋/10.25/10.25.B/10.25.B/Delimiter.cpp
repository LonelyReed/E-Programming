#include <iostream>
using namespace std;

int main()
{
	int numbers[100];
	int length;
	for (int i = 0; i < 100; i++)
	{
		cin >> numbers[i];
		length = i;
		if (numbers[i] == 0)
		{
			break;
		}

	}

	for (int i = length; i >= 0; i--)
	{
		cout << numbers[i] << endl;
	}




	return 0;
}