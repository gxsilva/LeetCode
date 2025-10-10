#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y, z;
	char a, b;

	cin >> x >> a >> y >> b >> z;
	if ((a == '+' && (x + y == z)) || (a == '-' && (x - y == z)) || (a == '*' && (x * y == z)))
		cout << "Yes\n";
	else
	{
		if (a == '+')
			cout << x + y << '\n';
		else if (a == '-')
			cout << x - y << '\n';
		else
			cout << x * y << "\n";
	}
	return (0);
}