#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int k = 0;
        for (int num : nums)
        {
            if (num != 0)
                nums[k++] = num; // k increments after the assignment
        }

        while (k < nums.size())
            nums[k++] = 0;
    }
};