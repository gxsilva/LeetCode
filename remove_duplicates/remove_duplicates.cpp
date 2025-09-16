#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
	int removeDuplicates(std::vector<int>& nums) {
		std::vector<int>::iterator it = std::unique(nums.begin(), nums.end());
		nums.resize(std::distance(nums.begin(), it));
		return (nums.size());
	}
};