//
// Created by fang on 2023/5/6.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string minNumber(vector<int>& nums) {
        vector<string> nums_string;
        for (int num: nums) {
            nums_string.push_back(to_string(num));
        }
        sort(nums_string.begin(), nums_string.end(), [](const string a, const string b){
           return a+b < b+a;
        });
        string ans = "";
        for (string num: nums_string) {
            ans += num;
        }
        return ans;
    }
};