//
// Created by fang on 2023/5/6.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dfs(vector<int>& nums, int i){
        int n = nums.size();
        if (n == i) return 1;
        int one = dfs(nums, i+1);
        int two = 0;
        if (n > i+1){
            if (10 <= nums[i]+10*nums[i+1] && nums[i]+10*nums[i+1] < 26){
                two = dfs(nums, i+2);
            }
        }
        return one+two;
    }

    int translateNum(int num) {
        vector<int> nums;
        while (num != 0){
            nums.push_back(num % 10);
            num /= 10;
        }
        return dfs(nums, 0);
    }

    int translateNum2(int num) {
        int x,y = num % 10,a = 1,b = 1,ans = 1;
        while (num > 0){
            num /= 10;
            x = num % 10;
            ans = ((x * 10 + y) <= 25 && (x * 10 + y) >= 10) ? a + b : a;
            b = a;
            a = ans;
            y = x;
        }
        return ans;
    }
};