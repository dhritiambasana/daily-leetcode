#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximum69Number(int n)
    {
        int max = n;
        int s = 0;
        int r = 0;
        int d = 0;

        while (n)
        {
            n = n / 10;
            d++;
        }
        n = max;

        if (d == 1)
            return 9;

        while (d > 1)
        {
            int power = 1;

            for (int i = 0; i < d; i++)
                power *= 10;

            r = n % power;
            r = r / (power / 10);

            if (r == 6)
                s = n + (3 * (power / 10));
            if (s > max)
                max = s;
            d--;
        }

        if (d == 1)
        {
            r = n % 10;
            if (r == 6)
                s = n + 3;
            if (s > max) {
                max = s;
                return max;
            }
        }

        return max;
    }
};