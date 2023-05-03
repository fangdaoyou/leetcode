//
// Created by fang on 2023/5/3.
//

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {

        if (matrix.size() == 0) return false;

        int row = 0, col = matrix[0].size()-1;

        while (row < matrix.size() and col >= 0){
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] > target) --col;
            else ++row;
        }

        return false;
    }
};