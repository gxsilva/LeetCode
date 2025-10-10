#include <bits/stdc++.h>

using namespace std;

//Max of 2 "movemets"
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y, z; cin >> x >> y >> z;

	vector<int> a = {x, y, z};

	sort(a.begin(), a.end());
	for (int x : a)
		cout << x << '\n';
	cout << '\n' << x << '\n' << y << '\n' << z << '\n';
	return (0);
}