#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> mergeDivide(vector<int> &nums, int start, int end)
    {
        if (start == end)
            return {nums[start]};

        int mid = (start + end) / 2;
        vector<int> left = mergeDivide(nums, start, mid);
        vector<int> right = mergeDivide(nums, mid + 1, end);

        return mergeSort(left, right);
    }

    vector<int> mergeSort(vector<int> &a, vector<int> &b)
    {
        int i = 0;
        int k = 0;
        int j = 0;
        vector<int> c(a.size() + b.size());

        while (a.size() > i && b.size() > j)
        {
            if (a[i] < b[j])
            {
                c[k] = a[i];
                i++;
                k++;
            }
            else
            {
                c[k] = b[j];
                k++;
                j++;
            }
        }

        while (a.size() > i)
        {
            c[k] = a[i];
            i++;
            k++;
        }

        while (b.size() > j)
        {
            c[k] = b[j];
            j++;
            k++;
        }

        return c;
    }

    vector<int> sortArray(vector<int> &nums)
    {
        return mergeDivide(nums, 0, nums.size() - 1);
    }
};