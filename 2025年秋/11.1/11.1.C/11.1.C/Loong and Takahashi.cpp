#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> mat(n, vector<int>(n));

	int xs[] = { 0,1,0,-1 };
	int ys[] = { 1,0,-1,0 };
	int facing = 0;
	int x = 0, y = 0;

	for (int i = 0; i < n * n - 1; i++)
	{	

		mat[x][y] = i + 1;
		x += xs[facing];
		y += ys[facing];

		if (x >= n || x < 0 || y >= n || y < 0 || mat[x][y] != 0)
		{	
			x -= xs[facing];
			y -= ys[facing];

			facing = (facing + 1) % 4;

			x += xs[facing];
			y += ys[facing];
			mat[x][y] = i + 1;
		}

		if (x == n / 2 && y == n / 2)
		{
			mat[x][y] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		/*	cout << mat[i][j] << " ";

			if (mat[i][j] == 0)
			{
				cout << "T";
			}*/

			if (mat[i][j] == 0)
			{
				cout << "T"<<" ";
		    }
			else
			{
				cout << mat[i][j] << " ";
			}
		}


		cout << endl;
	}





	return 0;
}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    vector<vector<int>> mat(n, vector<int>(n, 0));
//
//    // 标记中心位置
//    int center = n / 2;
//    mat[center][center] = -1;  // 用-1表示高桥看的位置
//
//    int dx[] = { 0, 1, 0, -1 };
//    int dy[] = { 1, 0, -1, 0 };
//    int dir = 0;
//    int x = 0, y = 0;
//    int num = 1;
//
//    for (int i = 0; i < n * n - 1; i++)
//    {
//        // 如果当前位置是中心，跳过并继续移动
//        while (x == center && y == center) {
//            x += dx[dir];
//            y += dy[dir];
//            // 检查是否需要转向
//            if (x < 0 || x >= n || y < 0 || y >= n || (mat[x][y] != 0 && !(x == center && y == center))) {
//                x -= dx[dir];  // 回退
//                y -= dy[dir];
//                dir = (dir + 1) % 4;
//                x += dx[dir];
//                y += dy[dir];
//            }
//        }
//
//        // 赋值
//        mat[x][y] = num++;
//
//        // 移动到下一个位置
//        int nx = x + dx[dir];
//        int ny = y + dy[dir];
//
//        // 检查下一个位置是否有效
//        if (nx < 0 || nx >= n || ny < 0 || ny >= n || (mat[nx][ny] != 0 && !(nx == center && ny == center))) {
//            dir = (dir + 1) % 4;
//            nx = x + dx[dir];
//            ny = y + dy[dir];
//        }
//
//        x = nx;
//        y = ny;
//    }
//
//    // 输出
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (mat[i][j] == -1) {
//                cout << "T";
//            }
//            else {
//                cout << mat[i][j];
//            }
//            if (j < n - 1) cout << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}