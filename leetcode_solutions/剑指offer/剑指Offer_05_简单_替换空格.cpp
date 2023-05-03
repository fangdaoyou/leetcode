//
// Created by fang on 2023/5/3.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        string ans = "";
        for (char c: s) {
            if (c == ' ') ans += "%20";
            else ans += c;
        }
        return ans;
    }
};