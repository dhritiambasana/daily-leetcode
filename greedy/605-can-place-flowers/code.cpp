#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &f, int n)
    {
        int c = 0;

        if (f.size() == 1)
        {
            if (f[0] == 0)
                return (n <= (c + 1));
        }

        if (f[0] == 0 && f[1] == 0)
        {
            c++;
            f[0] = 1;
        }
        if (f[f.size() - 1] == 0 && f[f.size() - 2] == 0)
        {
            c++;
            f[f.size() - 1] = 1;
        }

        if (f.size() > 2)
        {
            for (int i = 0; i < f.size() - 2; i++)
            {
                if (f[i] == 0)
                {
                    if (f[i + 1] == 0)
                    {
                        if (f[i + 2] == 0)
                        {
                            c++;
                            f[i + 1] = 1;
                        }
                    }
                }
            }
        }

        return (c >= n);
    }
};