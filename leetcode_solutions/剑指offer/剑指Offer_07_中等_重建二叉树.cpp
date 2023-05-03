//
// Created by fang on 2023/5/3.
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
    unordered_map<int, int> pre2in;
    TreeNode* myBuildTree(vector<int>& preorder, vector<int>& inorder, int pre_begin, int pre_end, int in_begin, int in_end){
        if (pre_begin > pre_end) return nullptr;

        int pre_root = pre_begin;
        int val = preorder[pre_root];
        int in_root = pre2in[val];

        int left_pre_begin = pre_begin+1;
        int left_tree_size = in_root-in_begin;
        int left_pre_end = pre_begin+left_tree_size;
        int left_in_begin = in_begin;
        int left_in_end = in_root-1;

        int right_pre_begin = pre_root+left_tree_size+1;
        int right_pre_end = pre_end;
        int right_in_begin = in_root+1;
        int right_in_end = in_end;

        TreeNode* node = new TreeNode(val);
        node->left = myBuildTree(preorder, inorder, left_pre_begin, left_pre_end, left_in_begin, left_in_end);
        node->right = myBuildTree(preorder, inorder, right_pre_begin, right_pre_end, right_in_begin, right_in_end);

        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < preorder.size(); ++i) {
            pre2in[inorder[i]] = i;
        }
        return myBuildTree(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
};

//int main(){
//    vector<int> preorder = {3, 9, 20, 15, 7}, inorder = {9, 3, 15, 20, 7};
//    TreeNode* head = Solution().buildTree(preorder, inorder);
//    return 0;
//}
