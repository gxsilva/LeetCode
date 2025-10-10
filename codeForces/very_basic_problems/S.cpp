#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	double x; cin >> x;
	
	if (x >= 0.0 && x <= 25.0)
		cout << "Interval [0,25]\n";
	else if (x > 25.0 && x <= 50)
		cout << "Interval (25,50]\n";
	else if (x > 50.0 && x <= 75)
		cout << "Interval (50,75]\n";
	else if (x > 75 && x <= 100)
		cout << "Interval (75,100]\n";
	else
		cout << "Out of Intervals\n";
	return (0);
}