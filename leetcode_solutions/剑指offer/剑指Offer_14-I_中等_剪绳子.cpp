//
// Created by fang on 2023/5/4.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        if (n == 2) return 1;
        if (n < 5) return (n-2) * 2;

        int ans = 1;
        while (n > 3){
            ans *= 3;
            n -= 3;
        }
        if (n == 1) return ans/3*4;
        return ans*n;
    }
};