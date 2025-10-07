#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b;
	char s;
	cin >> a >> s >> b;
	if (s == '+')
		cout << static_cast<int>(a + b) << "\n";
	else if (s == '-')
		cout << static_cast<int>(a - b) << "\n";
	else if (s == '*')
		cout << static_cast<int>(a * b) << '\n';
	else	
		cout << static_cast<int>(a / b) << '\n';
	return (0);
}