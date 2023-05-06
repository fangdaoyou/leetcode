//
// Created by fang on 2023/5/6.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        return search(nums, target, 0, nums.size() - 1);
    }

    int search(vector<int> &nums, int target, int left, int right) {
        int i = left, j = right;
        int res = 0;
        while (i <= j) {
            int mid = (i + j) >> 1;
            if (nums[mid] == target) {
                res += 1;
                res += search(nums, target, i, mid - 1);
                res += search(nums, target, mid + 1, j);
                break;
            } else if (nums[mid] > target) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return res;
    }
};