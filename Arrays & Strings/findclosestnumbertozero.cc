#include <iostream>
#include <vector>



int findClosestNumber(std::vector<int>& nums)
{
    int closest{nums[0]};

    for (int num : nums)
        if (std::abs(num) < std::abs(closest))
            closest = num;



    return closest;
}


int main()
{
    std::vector<int> nums{2, -1, 3, 4};
    int closest{findClosestNumber(nums)};

    std::cout << closest << std::endl;
}