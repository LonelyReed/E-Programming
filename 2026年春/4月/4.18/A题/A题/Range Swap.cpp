#include <iostream>
const int N = 110;

int A[N];

//数组一定范围的元素交换
void RangeSwap(int(&array)[N], int p, int q, int r, int s)
{
	for (int i = 0; i <q - p + 1 ; i++)
	{
		int temp = array[p + i - 1];
		array[p + i - 1] = array[r + i - 1];
		array[r + i - 1] = temp;
	}
}

int main()
{
	int n, p, q, r, s;
	std::cin >> n >> p >> q >> r >> s;

	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
	}

	RangeSwap(A, p, q, r, s);

	for (int i = 0; i < n; i++)
	{
		std::cout << A[i] << " ";
	}

	return 0;
}