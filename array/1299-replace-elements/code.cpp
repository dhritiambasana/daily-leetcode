#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> replaceElements(vector<int> &a)
    {
        int max = 0;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i + 1; j < a.size(); j++)
            {
                if (a[j] > max)
                    max = a[j];
            }
            a[i] = max;
            max = 0;
        }
        a[a.size() - 1] = -1;
        return a;
    }
};