#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	float x, y; cin >> x >> y;

	if (!x && y == 0)
		cout << "Origem\n";
	else if (x && y == 0)
		cout << "Eixo X\n";
	else if (x == 0 && y)
		cout << "Eixo Y\n";
	else if (x > 0 && y > 0)
		cout << "Q1\n";
	else if (x > 0 && y < 0)
		cout << "Q4\n";
	else if (x < 0 && y > 0)
		cout << "Q2\n";
	else
		cout << "Q3\n";
	return (0);
}