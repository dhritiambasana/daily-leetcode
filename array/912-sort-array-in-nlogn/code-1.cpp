#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int quickDivide(vector<int> &nums, int start, int end)
    {
        int pi = start;
        int pivot = nums[end];
        int t;
        for (int i = pi; i < end; i++)
        {
            if (nums[i] <= pivot)
            {
                swap(nums[i], nums[pi]);
                // t = nums[i];
                // nums[i] = nums[pi];
                // nums[pi] = t;

                pi++;
            }
        }
        swap(nums[pi], nums[end]);

        return pi;
    }

    vector<int> quickSort(vector<int> &nums, int start, int end)
    {
        if (start < end)
        {
            int pi = quickDivide(nums, start, end);
            vector<int> l = quickSort(nums, start, pi - 1);
            vector<int> r = quickSort(nums, pi + 1, end);
        }
        return nums;
    }

    vector<int> sortArray(vector<int> &nums)
    {
        return quickSort(nums, 0, nums.size() - 1);
    }
};