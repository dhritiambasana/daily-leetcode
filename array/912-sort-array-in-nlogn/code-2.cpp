#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int quickDivide(vector<int> &nums, int start, int end)
    {
        int pi = start;
        int random_index = start + rand() % (end - start + 1);
        swap(nums[end], nums[random_index]);
        int pivot = nums[end];

        for (int i = pi; i < end; i++)
        {
            if (nums[i] <= pivot)
            {
                swap(nums[i], nums[pi]);
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