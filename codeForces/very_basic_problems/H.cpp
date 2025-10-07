#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b; cin >> a >> b;
	cout << "floor " << a << " / " << b << " = " << floor(1.0 * a/b) << "\n";
	cout << "ceil " << a << " / " << b << " = " << ceil(1.0 * a/b) << "\n";
	cout << "round " << a << " / " << b << " = " << round(1.0 * a/b) << "\n";
	return (0);
}