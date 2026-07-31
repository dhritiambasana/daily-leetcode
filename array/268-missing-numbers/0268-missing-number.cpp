#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ideal_sum = 0;
        int vector_sum = 0;
        int k = 0;

        while (k <= nums.size())
        {
            ideal_sum += k;
            k++;
        }

        for (int i = 0; i < nums.size(); i++)
            vector_sum += nums[i];
        return ideal_sum - vector_sum;
    }
};