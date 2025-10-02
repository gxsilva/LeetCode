#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int l; cin >> l;
	int	r = 0;
	for(int i = 0; i < l; i++)
	{
		string o; cin >> o;
		if (o == "X++" || o == "++X")
			r++;
		else
			r--;
	}
	cout << r << endl;
	return (0);
}