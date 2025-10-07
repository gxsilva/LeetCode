#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string x, y; cin >> x >> y;
	string a, b; cin >> a >> b;
	
	if (y.compare(b) == 0)
		cout << "ARE Brothers\n";
	else
		cout << "NOT\n";
	return (0);
}