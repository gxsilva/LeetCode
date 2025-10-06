#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
		vector<int> plusOne(vector<int>& d) {
			if (d[(d.size() - 1)] < 9)
			{
				d[d.size() - 1]++;
				return (d);
			}
			else
			{
				for (int i = d.size() - 1; i >= 0; i--)
				{
					if (d[i] >= 9)
					{
						if (i == 0 && d[i] == 9)
						{
							d[i] = 1;
							d.push_back(0);
							break;
						}
						d[i] = 0;
						continue;
					}
					d[i]++;
					break;
				}
				return (d);
			}
		}
	};

class Tooling {
	public:
		template <typename T>
		static void printStlContainer(const T &C)
		{
			for (auto it = C.begin(); it != C.end(); ++it)
				cout << *it << " ";
			std::cout << std::endl;
		}
};

int main(void)
{
	Solution s = Solution();

	std::vector<int> v = {9, 9, 9, 9};
	std::vector<int>::iterator it;

	Tooling::printStlContainer(v);

	std::vector<int> vN = s.plusOne(v);

	Tooling::printStlContainer(vN);

	std::vector<int> v2 = {1, 2, 3, 4};

	v2.resize(v2.size() + 2);
	Tooling::printStlContainer(v2);

}
