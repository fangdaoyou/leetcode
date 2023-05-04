//
// Created by fang on 2023/5/4.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while (n) {
            if (n & 1) ans++;
            n = n >> 1;
        }
        return ans;
    }
};