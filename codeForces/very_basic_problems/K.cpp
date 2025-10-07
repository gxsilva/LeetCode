#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c; cin >> a >> b >> c;

	// cout << min(min(a, b), min(b, c)) << " " << max(max(a, b), max(b, c))  << "\n";
	cout << min({a, b,c}) << " " << max({a, b, c}) << "\n";
	return (0);
}