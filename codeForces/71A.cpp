#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int l; cin >> l;

	
	for (int i = 0; i < l; i++)
	{
		string n; cin >> n;
		int x = 0;
		while (n[x++])
		{
			if (x + 1 == n.length())
				if (x + 1 > 10)
					n.replace(0, x, n[0] +  to_string(x - 1));
		}
		cout << n << endl;
	}
	return (0);
}