#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& array, int target)
{
    int left = 0;
    int right = array.size() - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (array[middle] == target)
            return middle;

        if (array[middle] < target)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return -1;
}

int main()
{
    std::vector<int> numbers = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
    int target = 23;

    int index = binarySearch(numbers, target);

    if (index != -1)
        std::cout << "digit " << target << " in the index " << index << " contract." << std::endl;
    else
        std::cout << "digit " << target << "not found" << std::endl;

    return 0;
}
