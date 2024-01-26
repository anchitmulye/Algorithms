#include <iostream>
#include <vector>

template<typename T>
int64_t LinearSearch(std::vector<T>& array, T key)
{
    for (size_t i = 0; i < array.size(); i++)
        if (array.at(i) == key)
            return static_cast<int64_t>(i);
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

    std::cout << LinearSearch(array_1, target_1) << "\n";
}
