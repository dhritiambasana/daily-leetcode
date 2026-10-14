#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nextDivisible(int x, int y) {
        return (x / y + 1) * y;
    }
}; 