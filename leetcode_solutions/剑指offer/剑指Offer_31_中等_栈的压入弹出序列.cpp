//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped) {
        int n = pushed.size();
        if (n == 0) return true;
        stack<int> s;
        int index = 0;
        for (int i = 0; i < n; i++) {
            s.push(pushed[i]);
            while (s.top() == popped[index]) {
                s.pop();
                index++;
                if (s.empty()) {
                    break;
                }
            }
        }
        return index == n;
    }
};