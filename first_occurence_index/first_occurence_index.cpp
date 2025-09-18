#include <iostream>
#include <string>

using namespace std;

class Solution {
	//-1 = not found, >= 0 = found
	public:
	static int strStr(const std::string &haystack, const std::string &needle)
	{
		int searchRq = haystack.find(needle);
		if (searchRq != std::string::npos)
			return (0);
		return (-1);
	}
};

int main(void)
{
	string haystack = "sadbutsad";
	string needle = "w";
	cout << "Result: " << Solution::strStr(haystack, needle) << endl;
	return (0);
}