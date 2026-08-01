#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> f;
        for (int num : nums)
        {
            f[num]++;

            if (f[num] == 2)
            {
                return true;
            }
        }
        return false;
    }
};