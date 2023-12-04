#include <iostream>
#include <string>
#include <vector>

class Canvas
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        // 1. We Need to have 3 pointers that behave like clock hand
        // P1 Only move a step after P2 has completed a single roundtrip,
        // P2 Only move a step after P3 has completed a single roundtrip
        // P3 Keep moving while avoiding P2

        
        for (int num : nums) {
            std::cout << num << std::endl;
        }
        return {{1, 2, 3}};
    }
};

int main()
{
    Canvas *blankCanvas = new Canvas();

    std::vector<int> nums{-1, 0, 1, 2, -1, 4};
    blankCanvas->threeSum(nums);

    free(blankCanvas);

    return 0;
}