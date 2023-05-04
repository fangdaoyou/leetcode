//
// Created by fang on 2023/5/3.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findRepeatNumber1(vector<int> &nums) {
        unordered_set<int> set;
        for (int num: nums) {
            if (set.find(num) != set.end()) return num;
            set.insert(num);
        }
        return -1;
    }

    int findRepeatNumber2(vector<int> &nums) {
        int i = 0, n = nums.size();
        while (i < n) {
            if (nums[i] == i) {
                i++;
                continue;
            }
            if (nums[nums[i]] == nums[i]) return nums[i];
            swap(nums[i], nums[nums[i]]);
        }
        return -1;
    }
};