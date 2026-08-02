#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &n, vector<int> &m)
    {
        unordered_set<int> s(n.begin(), n.end());
        vector<int> ans;

        for (int num : m)
        {
            if (s.find(num) != s.end())
            {
                ans.push_back(num);
                s.erase(num);
            }
        }

        return ans;
    }
};