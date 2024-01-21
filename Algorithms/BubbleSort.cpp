#include <iostream>
#include <vector>

template<typename T>
void BubbleSort(std::vector<T>& array)
{
    // after each iteration the max number gets pushed to the end
    for (size_t i = 0; i < array.size() - 1; i++)
        for (size_t j = 0; j < array.size() - i - 1; j++)
            if (array.at(j) > array.at(j + 1))
                std::swap(array.at(j), array.at(j + 1));  
}

int main()
{
    //Example 1
    std::vector<int64_t> array_0 = { 3, 2, 4, 5, 1 };

    //Example 2
    std::vector<double> array_1 = { 4.4, 2.2, 1.1, 3.3, 5.5 };
    
    //Example 3
    std::vector<char> array_2 = { 'c', 'a', 'b', 'e', 'd' };
    
    BubbleSort(array_0);

    for (const auto& element : array_0)
        std::cout << element << " ";
    std::cout << "\n";
}