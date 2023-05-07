#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int res = 0, n = nums.size();
        for (int num : nums) {
            res ^= num;
        }
        int div = 1;
        while ((res & div) == 0){
            div = div << 1;
        }
        int a = 0, b = 0;
        for (int num : nums) {
            if ((num & div) == 0){
                a ^= num;
            } else {
                b ^= num;
            }
        }
        return {a, b};
    }
};
