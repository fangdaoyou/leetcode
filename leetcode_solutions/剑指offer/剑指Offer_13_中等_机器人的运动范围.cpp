//
// Created by fang on 2023/5/3.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
    int get(int x) {
        int res = 0;
        for (; x; x /= 10) {
            res += x % 10;
        }
        return res;
    }

public:
    int movingCount(int m, int n, int k) {
        if (!k) return 1;
        vector <vector<bool>> vis(m, vector<bool>(n, false));
        int ans = 1;
        vis[0][0] = true;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if ((i == 0 && j == 0) || get(i) + get(j) > k) continue;
                // 边界判断
                if (i - 1 >= 0) vis[i][j] = vis[i - 1][j] || vis[i][j];
                if (j - 1 >= 0) vis[i][j] = vis[i][j - 1] || vis[i][j];
                ans += vis[i][j];
            }
        }
        return ans;
    }
};