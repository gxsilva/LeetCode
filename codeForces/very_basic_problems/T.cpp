#include <bits/stdc++.h>

using namespace std;

//Max of 2 "movemets"
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y, z; cin >> x >> y >> z;

	if (x <= y && x <= z)
	{
		cout << x << "\n";
		if (z < y)
			cout << z << '\n' << y << '\n';
		else
			cout << y << '\n' << z << '\n';
	}
	else
	{
		if (y <= z)
		{
			cout << y << '\n';
			if (x <= z)
				cout << x << '\n' << z << '\n';
			else
				cout << z << '\n' << x << '\n';
		}
		else
		{
			cout << z << '\n';
			if (x <= y)
				cout << x << '\n' << y << '\n';
			else
				cout << y << '\n' << x << '\n';
		}
	}
	cout << '\n' << x << '\n' << y << '\n' << z << '\n';
	return (0);
}