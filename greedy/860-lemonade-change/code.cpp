#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int>& bills) {
        int b_5 = 0;
        int b_10 = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                b_5 += 1;
            } else if (bills[i] == 10) {
                if (b_5 >= 1) {
                    b_5 -= 1;
                    b_10 += 1;
                }
                else {
                    return false;
                } 
            } else if (bills[i] == 20) {
                if (b_10 >= 1 && b_5 >= 1) {
                    b_10 -= 1; 
                    b_5 -= 1;
                } else if (b_5 >= 3) {
                    b_5 -= 3;
                } else {
                    return false;
                } 
            } 
        }
        return true;
    }
};