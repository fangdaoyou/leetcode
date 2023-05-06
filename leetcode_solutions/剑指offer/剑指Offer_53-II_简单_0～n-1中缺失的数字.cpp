//
// Created by fang on 2023/5/6.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int ans = 0, n = nums.size();
        for (int i = 0; i < n; ++i) {
            ans = ans ^ (i + 1);
            ans = ans ^ nums[i];
        }
        return ans;
    }
};