//
// Created by fang on 2023/5/4.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> printNumbers(int n) {
        long long limit = pow(10, n);
        vector<int> ans;
        for (int i = 1; i < limit; ++i) {
            ans.push_back(i);
        }
        return ans;
    }
};