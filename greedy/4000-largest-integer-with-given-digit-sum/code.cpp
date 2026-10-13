#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestInteger(int n, int s)
    {
        int res = 0;
        int t = n;

        if (s == 0 || n == 0)
            return 0;

        int p = 1;
        for (int i = 0; i < n - 1; i++)
            p *= 10;

        if (s <= 9)
            return (s * p);

        while (t > 0)
        {
            if (s > 9)
            {
                res = (res * 10) + 9;
                s -= 9;
            }
            else
            {
                res = (res * 10) + s;
                s -= s;
            }
            t--;
        }

        if (s != 0)
            return -1;

        return res;
    }
};