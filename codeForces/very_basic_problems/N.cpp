#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	char x; cin >> x;

	if (islower(x))
		cout << static_cast<char>(toupper(x)) << '\n';
	else
		cout << static_cast<char>(tolower(x)) << '\n';
	return (0);
}