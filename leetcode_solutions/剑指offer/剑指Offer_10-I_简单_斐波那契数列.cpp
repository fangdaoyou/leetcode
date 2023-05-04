//
// Created by fang on 2023/5/3.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int fib(int n) {
        vector<int> dp(n + 3, 1);
        int MOD = 1e9 + 7;
        dp[0] = 0;
        for (int i = 2; i < n + 1; ++i) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
        }
        return dp[n];
    }
};