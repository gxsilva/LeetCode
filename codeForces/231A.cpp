#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int l; cin >> l;
	int r = 0;
	for (int i = 0; i < l; i++)
	{
		int x, y, z;
		cin >> x; cin >> y; cin >> z;
		if ((x && y) || (x && z) || (y && z))
			r++;
	}
	cout << r << endl;
	return (0);
}