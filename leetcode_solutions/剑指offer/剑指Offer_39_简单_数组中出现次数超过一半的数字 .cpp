//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int num = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (num == nums[i]) count++;
            else count--;

            if (count == 0){
                num = nums[i];
                count = 1;
            }
        }
        return num;
    }
};