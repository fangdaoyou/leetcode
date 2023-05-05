//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;

// Definition for a binary tree node.
  struct TreeNode {
   int val;
 TreeNode *left;
    TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<vector<int>> ans;
    void helper(TreeNode* root, int target, vector<int> & temp){
        if (root == nullptr) {
            return;
        }

        if (root->left == nullptr && root->right == nullptr && target-root->val == 0){
            temp.push_back(root->val);
            ans.push_back(temp);
            temp.pop_back();
            return;
        }

        temp.push_back(root->val);
        helper(root->left, target-root->val, temp);
        helper(root->right, target-root->val, temp);
        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<int> temp;
        helper(root, target, temp);
        return ans;
    }
};