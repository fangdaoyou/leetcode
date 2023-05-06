//
// Created by fang on 2023/5/6.
//


#include <bits/stdc++.h>

using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int kthLargest(TreeNode* root, int k) {
        int ret = 0;
        inorder(root, k, ret);
        return ret;
    }

    void inorder(TreeNode* root, int &k, int& ret)
    {
        if(root == NULL) return;
        inorder(root->right, k, ret);
        if(k == 0) return;
        k--;
        if(k == 0)
        {
            ret = root->val;
        }
        inorder(root->left, k, ret);
        return;
    }
};