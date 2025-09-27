#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

class Solution {
public:

	//=======================O(N)====================================
	int searchInsertIterator(vector<int>& nums, int target) {
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
	int searchInsertIndex(vector<int>& nums, int target) {
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
	int searchInsertBinarySearch(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size() - 1;
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

	//=======================UTILS====================================
	static vector<int> &randomIntVector(int vSize, int min, int max) {
		vector<int> *v = new vector<int>(vSize);
		for (int i = 0; i < vSize; i++)
			(*v)[i] = 1 + (rand() % (max - min + 1));
		sort(v->begin(), v->end());
		auto it = unique(v->begin(), v->end());
		v->resize(distance(v->begin(), it));
		return (*v);
	}

	int randomNumber(int range)
	{
		return ((1 + (rand() & (range - 1  + 1))));
	}
};

int main(void)
{
	int	range =  1000;
	srand(static_cast<unsigned int>(time(0)));
	Solution s = Solution();
	vector<int> v = Solution::randomIntVector(range, 1, 1000);
	cout << "Vector size: " << v.size() << endl;
	{
		auto start_time = std::chrono::high_resolution_clock::now();
		cout << "res: " << s.searchInsertIterator(v, v[s.randomNumber(range)]) << endl; // 2
		cout << "res: " << s.searchInsertIterator(v, v[s.randomNumber(range)]) << endl; // 1
		cout << "res: " << s.searchInsertIterator(v, v[s.randomNumber(range)]) << endl; // 4
		auto end_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
		cout << "Time the function has taken: " << duration.count() << endl;
	}
	cout << endl;
	{
		auto start_time = std::chrono::high_resolution_clock::now();
		cout << "res: " << s.searchInsertIndex(v, v[s.randomNumber(range)]) << endl; // 2
		cout << "res: " << s.searchInsertIndex(v, v[s.randomNumber(range)]) << endl; // 1
		cout << "res: " << s.searchInsertIndex(v, v[s.randomNumber(range)]) << endl; // 4
		auto end_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
		cout << "Time the function has taken: " << duration.count() << endl;
	}
	cout << endl;
	{
		auto start_time = std::chrono::high_resolution_clock::now();
		cout << "res: " << s.searchInsertBinarySearch(v, v[s.randomNumber(range)]) << endl; // 2
		cout << "res: " << s.searchInsertBinarySearch(v, v[s.randomNumber(range)]) << endl; // 1
		cout << "res: " << s.searchInsertBinarySearch(v, v[s.randomNumber(range)]) << endl; // 4
		auto end_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
		cout << "Time the function has taken: " << duration.count() << endl;
	}
	cout << endl;
	{
		vector<int> v2 = {15, 30, 45, 60};
		cout << "size: " << v2.size() << endl;
	}
	return (0);
}