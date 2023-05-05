//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int n = nums.size(), ans = nums[0];
        for (int i = 1; i < n; ++i) {
            if (nums[i - 1] >= 0) {
                nums[i] += nums[i - 1];
            }
            ans = max(ans, nums[i]);
        }
        return ans;
    }
};