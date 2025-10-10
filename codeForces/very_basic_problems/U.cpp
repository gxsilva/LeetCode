#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	//===================MATH LIKE (WORKS BUT INS't THE BETTER OPTIOn) ===========================
	{
	double x; cin >> x;
	
	if (fabs(fmod(x, static_cast<int>(x))) < 1e-9)
		cout << "int " << static_cast<int>(x) << '\n';
	else
		cout << "float " << static_cast<int>(x) <<  " " << fmod(x, static_cast<int>(x)) << '\n';
	}

	//===================STRING LIKE (BEST APPROACH) ===========================
	{
	string x; cin >> x;
	
	if (x.find('.') == string::npos)
		cout << "int " << x << '\n';
	else
	{
		string i = x.substr(0, x.find('.'));
		string f = x.substr(x.find('.') + 1, x.length());

		cout << "float: " << i << " 0." << f << '\n';
	}
	}
	return (0);
}