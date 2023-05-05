//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> ans(k, 0);
        if (k == 0) {
            return ans;
        }
        priority_queue<int> pq;
        for (int i = 0; i < k; ++i) {
            pq.push(arr[i]);
        }
        for (int i = k; i < (int)arr.size(); ++i) {
            if (pq.top() > arr[i]) {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        for (int i = 0; i < k; ++i) {
            ans[i] = pq.top();
            pq.pop();
        }
        return ans;
    }
};