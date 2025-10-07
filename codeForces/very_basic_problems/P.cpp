#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x; cin >> x;
	if ((x / 1000) % 2 == 0)
		cout << "EVEN\n";
	else
		cout << "ODD\n";
	return (0);
}