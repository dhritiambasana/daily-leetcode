#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> neg;
        vector<int> pos;
        vector<int> rearrange(nums.size());

        for (int n : nums)
        {
            if (n < 0)
                neg.push_back(n);
            else
                pos.push_back(n);
        }

        int j = 0;
        for (int i = 0; i < pos.size(); i++)
        {
            rearrange[j] = pos[i];
            rearrange[j + 1] = neg[i];
            j += 2;
        }
        return rearrange;
    }
};