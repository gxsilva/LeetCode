#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

class Solution {
public:

	//=======================O(N)====================================
	static int searchInsertIterator(vector<int>& nums, int target) {
		vector<int>::iterator it;
		int index = 0;
		for (it = nums.begin(); it != nums.end(); it++, index++)
		{
			if (*it == target)
				return (index);
			if (it == nums.end())
				return (++index);
			if (*it > target)
				return (index);
			continue ;
		}

		return (index);
	}
	//way more faster acesses an index directly than look an pointer, =~1/7 more faster
	static int searchInsertIndex(vector<int>& nums, int target) {
		int i;
		for (i = 0; i < nums.size(); i++)
		{
			if (nums[i] == target)
				return (i);
			if (nums[i] > target)
				return (i);
		}
		return (i);
	}
	//=======================O(Log N)====================================
	static int searchInsertBinarySearch(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size();
		while (left <= right)
		{
			int mid = left + (right - left) / 2;
			if (nums[mid] < target)
				left = mid + 1;
			else
				right = mid - 1;
		}
		return (left);
	}
};

int main(void)
{
	vector<int> v = {1,3,5,6};
	{
		auto start_time = std::chrono::high_resolution_clock::now();
		cout << "res: " << Solution::searchInsertIterator(v, 5) << endl; // 2
		cout << "res: " << Solution::searchInsertIterator(v, 2) << endl; // 1
		cout << "res: " << Solution::searchInsertIterator(v, 7) << endl; // 4
		auto end_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
		cout << "Time the function has taken: " << duration.count() << endl;
	}
	cout << endl;
	{
		auto start_time = std::chrono::high_resolution_clock::now();
		cout << "res: " << Solution::searchInsertIndex(v, 5) << endl; // 2
		cout << "res: " << Solution::searchInsertIndex(v, 2) << endl; // 1
		cout << "res: " << Solution::searchInsertIndex(v, 7) << endl; // 4
		auto end_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
		cout << "Time the function has taken: " << duration.count() << endl;
	}
	cout << endl;
	{
		auto start_time = std::chrono::high_resolution_clock::now();
		cout << "res: " << Solution::searchInsertBinarySearch(v, 5) << endl; // 2
		cout << "res: " << Solution::searchInsertBinarySearch(v, 2) << endl; // 1
		cout << "res: " << Solution::searchInsertBinarySearch(v, 7) << endl; // 4
		auto end_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
		cout << "Time the function has taken: " << duration.count() << endl;
	}
	int half_middle = 0 + (9 - 0) / 2;
	cout << "mid: " << half_middle << endl;
	return (0);
}