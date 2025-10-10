#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x; cin >> x;
	
	cout << (x / 365) << " years\n";
	x %= 365;
	cout << (x / 30) << " months\n";
	x %= 30;
	cout << x << " days\n";
	return (0);
}