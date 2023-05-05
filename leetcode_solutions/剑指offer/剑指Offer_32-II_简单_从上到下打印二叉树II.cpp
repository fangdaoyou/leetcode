//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;


//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector <vector<int>> levelOrder(TreeNode *root) {
        vector <vector<int>> ans;
        deque < TreeNode * > deque1;
        if (root == nullptr) return ans;
        deque1.push_back(root);

        while (!deque1.empty()) {
            int deq_size = deque1.size();
            vector<int> temp;
            for (int i = 0; i < deq_size; ++i) {
                TreeNode *node = deque1.front();
                deque1.pop_front();
                temp.push_back(node->val);
                if (node->left != nullptr)
                    deque1.push_back(node->left);
                if (node->right != nullptr)
                    deque1.push_back(node->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};