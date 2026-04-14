#include <iostream>
using namespace std;

int main()
{
    int k, n,a;
    k = 0;
    cin >> n;

    for (int i = 1; i < n; i++) {
        cin >> a;
        k += a;
    }
    k = -k;
    cout << k;
    return 0;
}