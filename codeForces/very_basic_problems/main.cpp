#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int x; cin >> x;

	long long y = 1;
	int m = 100;
	for (int i = 2; i <= x; i++)
		y = (y * i)%m;
	cout << y%m << '\n';
	int r = 1e9;
	cout << r << '\n';
	return (0);
}