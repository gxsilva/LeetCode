#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int x, y, z;
	cin >> x, cin >> y, cin >> z;
	long long h = 1;
	long long v = 1;
	while ((h * z) < x)
		h++;
	while ((v * z) < y)
		v++;
	cout << h * v << endl;
	return (0);
}