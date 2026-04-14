#include <iostream>
#include <cmath>
using namespace std;

struct Point {
	int x;
	int y;
};



int main()
{
	int N;
	cin >> N;

	Point points[100];

	for (int i = 0; i < N; i++)
	{
		cin >> points[i].x >> points[i].y;
	}

	for (int i = 0; i < N; i++)
	{
		double distance=0;
		int order = 0;

		for (int j = 0; j < N; j++)
		{
			if (distance < sqrt((points[i].x - points[j].x) * (points[i].x - points[j].x) + (points[i].y - points[j].y) * (points[i].y - points[j].y)))
			{
				order = j+1;
				distance = sqrt((points[i].x - points[j].x) * (points[i].x - points[j].x) + (points[i].y - points[j].y) * (points[i].y - points[j].y));
			}
		}

		cout << order << endl;
	}
	
	return 0;
}