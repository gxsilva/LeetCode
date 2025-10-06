#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class uniqueElements {
	public:
		template <typename T>
		void sortUniqueErase (std::vector<T>& arr)
		{
			std::cout << "Before" << std::endl;
			uniqueElements::printVector(arr);
			typename std::vector<T>::iterator it = std::unique(arr.begin(), arr.end());
			arr.erase(it, arr.end());
			
			std::cout << "After" << std::endl;
			uniqueElements::printVector(arr);
		}
	
		template <typename T>
		void sortUniqueResizeDistance (std::vector<T>& arr) {
			std::cout << "Before" << std::endl;
			uniqueElements::printVector(arr);
			std::sort(arr.begin(), arr.end());
			typename std::vector<T>::iterator it = std::unique(arr.begin(), arr.end());

			std::ptrdiff_t d = std::distance(arr.begin(), it);
			arr.resize(d);
			std::cout << "After" << std::endl;
			uniqueElements::printVector(arr);
		}

		template <typename T>
		static void printVector(std::vector<T>& arr)
		{
			typename std::vector<T>::iterator it;

			for (it = arr.begin(); it != arr.end(); it++)
				std::cout << *it << std::endl;
		} 
};


int main(void)
{
	uniqueElements methodUnique;
	std::vector<int> arr = {1, 1, 2, 2 ,3 ,3 ,4 ,5, 6};
	
	methodUnique.sortUniqueResizeDistance(arr);

	return (0);
}
