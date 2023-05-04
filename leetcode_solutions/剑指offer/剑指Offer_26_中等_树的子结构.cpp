//
// Created by fang on 2023/5/4.
//


#include <bits/stdc++.h>

using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    bool judge(TreeNode* A, TreeNode* B){
        if (B == nullptr) return true;
        if (A == nullptr) return false;
        if (A->val == B->val) return judge(A->left, B->left) && judge(A->right, B->right);
        return false;
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (A == nullptr || B == nullptr) return false;

        return judge(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
};