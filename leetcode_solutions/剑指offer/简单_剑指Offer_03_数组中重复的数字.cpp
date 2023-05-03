//
// Created by fang on 2023/5/3.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_set<int> set;
        for (int num: nums) {
            if (set.find(num) != set.end()) return num;
            set.insert(num);
        }
        return -1;
    }
};