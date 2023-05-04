//
// Created by fang on 2023/5/4.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long tn = n;
        double ans = 1.0;
        if (n < 0) {
            x = 1 / x;
            tn = -tn;
        }

        double temp = x;
        while (tn) {
            if (tn & 1) {
                ans *= temp;
            }
            temp *= temp;
            tn = tn >> 1;
        }
        return ans;
    }
};