//
// Created by fang on 2023/5/6.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, n = s.size(), ans = 0;
        unordered_map<char, int> map;
        for (; r < n; ++r) {
            auto it = map.find(s[r]);
            if (it != map.end() && it->second >= l) {
                l = map[s[r]] + 1;
            }
            map[s[r]] = r;
            ans = max(ans, r - l + 1);
        }
        return max(ans, r - l);
    }
};