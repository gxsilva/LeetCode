#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	static int removeElement(vector<int>& nums, int val) {
		vector<int>::iterator it = nums.begin();
		int size = nums.size();
		for (int i = 0; i < size; i++)
		{
			if (*it == val)
			{
				it = nums.erase(it);
				continue ;
			}
			it++;
		}
		return (nums.size());
	}
};

template <typename T>
void print_vector(vector<T> v)
{
	typename vector<T>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << endl;


}

int main(void)
{
	vector<int> v =  {1 ,2 ,2 ,3 ,4 ,3};
	cout << "before" << endl;
	print_vector(v);
	int target = 3;
	Solution::removeElement(v, target);
	cout << "after" << endl;
	print_vector(v);
	return (0);
}