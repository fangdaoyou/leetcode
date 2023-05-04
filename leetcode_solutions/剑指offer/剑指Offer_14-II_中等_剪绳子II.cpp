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

        int MOD = 1e9+7;

        long long ans = 1;
        while (n > 4){
            ans = ans * 3 % MOD;
            n -= 3;
        }
        return (int)(ans*n % MOD);
    }
};