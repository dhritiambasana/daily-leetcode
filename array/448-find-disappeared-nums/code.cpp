#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int index;
        for (int i = 0; i < nums.size(); i++)
        {                             // i = 0, 1, 2
            index = abs(nums[i]) - 1; // 4 - 1 = 3, 3 - 1 = 2, abs(-2) - 1 = 1
            if (nums[index] > 0)
                nums[index] = -nums[index]; // nums[3] = -7, nums[2] = -2, nums[1] = -4
        }

        vector<int> r;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                r.push_back(i + 1);
        }

        return r;
    }
};