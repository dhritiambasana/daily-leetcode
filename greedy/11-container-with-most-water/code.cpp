#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int i = 0;
        int j = n - 1;
        long long water = 0;

        while (i < j) {
            int baseline = min(height[i], height[j]);
            long long area = 1LL * baseline * (j - i);

            if (water < area)
                water = area;

            if (height[i] < height[j]) 
                i++;
            else 
                j--;
        }

        return water;
    }
};