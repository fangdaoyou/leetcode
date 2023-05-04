//
// Created by fang on 2023/5/4.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> exchange(vector<int> &nums) {
        int n = nums.size();
        int l = 0, r = n - 1;
        while (l <= r) {
            if (nums[l] & 1) {
                ++l;
            } else {
                swap(nums[l], nums[r]);
                --r;
            }
        }

        return nums;
    }
};