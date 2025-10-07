#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	char a; cin >> a;
	int x = static_cast<int>(a);

	if (isascii(x) && isalpha(x))
	{
		cout << "ALPHA\n";
		if (isupper(x))
			cout << "IS CAPITAL\n";
		else
			cout << "IS SMALL\n";
	}
	else
		cout << "IS DIGIT\n";
	return (0);

}