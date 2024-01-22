#include <iostream>
#include <vector>

template<typename T>
void SelectionSort(std::vector<T>& array)
{
    // select the smallest index in each iteration then put that at the beginning
    for (size_t i = 0; i < array.size(); i++)
    {
        int64_t min = i;
        for (size_t j = i + 1; j < array.size(); j++)
            if (array.at(j) < array.at(min))
                min = j;
        std::swap(array.at(min), array.at(i));
    }
}

int main()
{
    //Example 1
    std::vector<int64_t> array_0 = { 3, 2, 4, 5, 1 };

    //Example 2
    std::vector<double> array_1 = { 4.4, 2.2, 1.1, 3.3, 5.5 };
    
    //Example 3
    std::vector<char> array_2 = { 'c', 'a', 'b', 'e', 'd' };
    
    SelectionSort(array_0);

    for (const auto& element : array_0)
        std::cout << element << " ";
    std::cout << "\n";
}