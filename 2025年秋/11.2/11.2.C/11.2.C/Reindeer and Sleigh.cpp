#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;

	vector<long long> R(n);

	for (int i = 0; i < n; i++)
	{
		cin >> R[i];
	}

	//vector<long long> Q(q);

	//for (int i = 0; i < q; i++)
	//{
	//	cin >> Q[i];
	//}

	vector<long long> prefix(R.size());
	//前缀和，数列求和构成一个新数列
	sort(R.begin(), R.end());

	prefix[0] = R[0];
	for (int i = 1; i < R.size(); i++)
	{
		prefix[i] = prefix[i - 1] + R[i];
	}

	for (int i = 0; i < q; i++)
	{
		long long Q;
		cin >> Q;

		auto position = upper_bound(prefix.begin(), prefix.end(),Q );
		//upper_bound 返回的是位置（迭代器），不是数值
		//long long 是数值类型，不能存储位置信息
		//auto 让编译器自动推断正确的类型（迭代器）
		//我们最终需要的是位置索引，不是该位置的值
		
		cout << (position - prefix.begin())<<endl;
		//upper_bound返回的是一个位置，不是索引。要用它减去前缀和的第一个位置得到索引
	}

	

	return 0;
}