//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> ans;
    int m, n;

    void dfs(vector <vector<int>> &matrix, int i, int j, int state) {
        if (i < 0 || i >= m || j < 0 || j >= n || matrix[i][j] == INT_MAX) return;
        ans.push_back(matrix[i][j]);
        matrix[i][j] = INT_MAX;
        if (state == 0) {
            dfs(matrix, i, j + 1, 0);
            dfs(matrix, i + 1, j, 1);
        } else if (state == 1) {
            dfs(matrix, i + 1, j, 1);
            dfs(matrix, i, j - 1, 2);
        } else if (state == 2) {
            dfs(matrix, i, j - 1, 2);
            dfs(matrix, i - 1, j, 3);
        } else {
            dfs(matrix, i - 1, j, 3);
            dfs(matrix, i, j + 1, 0);
        }
    }

    vector<int> spiralOrder(vector <vector<int>> &matrix) {
        if (matrix.size() == 0) return ans;
        m = matrix.size();
        n = matrix[0].size();
        dfs(matrix, 0, 0, 0);
        return ans;
    }
};