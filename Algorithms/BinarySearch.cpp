#include <iostream>
#include <vector>

template<typename T>
int64_t BinarySearch(std::vector<T>& array, T key)
{
    size_t start = 0;
    size_t end = array.size() - 1;

    while (start <= end)
    {
        size_t mid = static_cast<size_t>(start + (end - start) / 2);

	if (array.at(mid) == key)
            return static_cast<int64_t>(mid);

        else if (array.at(mid) < key)
            start = mid + 1;

        else
	    end = mid - 1;
    }   
    return -1;
}

int main()
{
    //Example 1
    std::vector<int64_t> array_0 = { 1, 2, 3, 4, 5 };
    int64_t target_0 = 3;

    //Example 2
    std::vector<double> array_1 = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    double target_1 = 2.2;
    
    //Example 3
    std::vector<char> array_2 = { 'a', 'b', 'c', 'd', 'e' };
    char target_2 = 'e';
    
    std::cout << BinarySearch(array_2, target_2) << "\n";
}
