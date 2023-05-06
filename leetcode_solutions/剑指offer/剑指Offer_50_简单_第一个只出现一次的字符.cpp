//
// Created by fang on 2023/5/6.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char firstUniqChar(string s) {
        char ans = ' ';
        unordered_map<char, int> map;
        for (char c : s) {
            map[c]++;
        }
        for (char c : s) {
            if (map[c] == 1){
                ans = c;
                return ans;
            }
        }
        return ans;
    }
};