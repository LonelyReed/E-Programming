#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int h, w, n;
	cin >> h >> w >> n;

	vector<string> mat(h, string(w, '.'));

	int pos_x = 0;
	int pos_y = 0;

	int facing = 0;

	int xs[4] = { -1,0,1,0 };
	int ys[4] = { 0,1,0,-1 };


	for (int i = 0; i < n; i++)
	{
		if (mat[pos_x][pos_y] == '.')
		{
			mat[pos_x][pos_y] = '#';
			facing = (facing + 1) % 4;
		}

		else
		{
			mat[pos_x][pos_y] = '.';
			facing = (facing + 3) % 4;
		}

		/*pos_x = (pos_x + xs[facing]) % h;
		pos_y = (pos_x + ys[facing]) % w;*/

		pos_x = pos_x + xs[facing];
		pos_y = pos_y + ys[facing];

		if (pos_x >= h)
		{
			pos_x = 0;
		}
		else if (pos_x < 0)
		{
			pos_x = h - 1;
		}

		if (pos_y >= w)
		{
			pos_y = 0;
		}
		else if (pos_y < 0)
		{
			pos_y = w - 1;
		}

	}

	for (int i = 0; i < h; i++)
	{
		cout << mat[i] << endl;
	}


	return 0;
}