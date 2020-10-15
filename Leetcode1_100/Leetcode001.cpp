#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    vector<int> test = {1, 2, 3, 4};
    Solution Solution1;
    vector<int> pppp = Solution1.twoSum(test, 5);

    for (int i = 0; i < pppp.size(); ++i)
    {
        cout << pppp[i] << endl;
    }
}
