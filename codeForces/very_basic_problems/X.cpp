#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	//=================MY LOGIC==========================
	{
		int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
		if ((l2 >= l1 && l2 <= r1) || (l1 >= l2 && l1 <= r2))
		{
			cout << (l2 >= l1 ? l2 : l1) << ' ';
			cout << (r1 <= r2 ? r1 : r2) << endl;
		}
		else
			cout << -1 << '\n';
	}
	//=================CLEVER LOGIC==========================

	// [l1,r1], [l2,r2] if and only overlap -> max(l1, l2) <= min(r1, r2)
	int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;

	if (max(l1, l2) <= min(r1, r2))
		cout << max(l1, l2) << " " << min(r1, r2) << '\n';
	else
		cout << -1 << '\n';

	return (0);
}